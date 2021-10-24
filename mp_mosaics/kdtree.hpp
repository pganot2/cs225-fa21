/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>

using namespace std;

template <int Dim>
bool KDTree<Dim>::smallerDimVal(const Point<Dim>& first,
                                const Point<Dim>& second, int curDim) const
{
    /**
     * @todo Implement this function!
     */
    if (curDim < 0 || curDim >= Dim) return false;
    if (first[curDim] < second[curDim]) return true;
    if (first[curDim] > second[curDim]) return false;
    if (first[curDim] == second[curDim]) {
      return first < second;
    }
    return false;
}

template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim>& target,
                                const Point<Dim>& currentBest,
                                const Point<Dim>& potential) const
{
    /**
     * @todo Implement this function!
     */
    // Returns true if potential is closer (i.e., has a smaller euclidean distance) to target than current Best
    if (getEuclideanDistance(target, potential) < getEuclideanDistance(target, currentBest))
      return true;
    if (getEuclideanDistance(target, potential) > getEuclideanDistance(target, currentBest))
      return false;
    // If Euclidean distances are equal then use operator< for both points
    if (getEuclideanDistance(target, potential) == getEuclideanDistance(target, currentBest)) {
      return potential < currentBest;
    }
    return false;
}

template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>>& newPoints)
{
    /**
     * @todo Implement this function!
     */
    // A new KDTree will be empty, so size is 0
    size = 0;
    vector<Point<Dim>> points;
    // Copies values from newPoints to points
    points.assign(newPoints.begin(), newPoints.end());
    // Builds a tree using recursive helper functions  
    root = buildTree(points, 0, 0, points.size() - 1);

}

template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  /**
   * @todo Implement this function!
   */
}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */

  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {
  /**
   * @todo Implement this function!
   */
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */
    // Finding nearest neighbor for given query point
    return findNearestNeighbor(query, 0, root);
}

template <int Dim>
int KDTree<Dim>::getEuclideanDistance(const Point<Dim>& point1, 
                                      const Point<Dim>& point2) const
{
  int sum = 0;
  for (int i = 0; i < Dim; i++) {
    sum += (point1[i] - point2[i])*(point1[i] - point2[i]);
  }
  return sqrt(sum);
}

template <int Dim>
typename KDTree<Dim>::KDTreeNode* KDTree<Dim>::buildTree(vector<Point<Dim>>& points,
                                                         int curDim, unsigned left, 
                                                         unsigned right)
{
  // Checks if the parameters are within bounds
  if (points.empty() || left < 0 || left >= points.size() || right < 0 || right >= points.size()) {
    return NULL;
  }
  if (left <= right) {
    // pivotIndex for quickselect
    // rand() % right + left;
    unsigned middle = (left + right) / 2;
    // use quickselect algorithm
    Point<Dim> p = quickselect(points, curDim % Dim, left, right, middle);
    KDTreeNode* curRoot = new KDTreeNode(p);
    // size_t has no ++ operator so use += 1;
    size += 1;
    curRoot->left = buildTree(points, (curDim + 1) % Dim, left, middle - 1);
    curRoot->right = buildTree(points, (curDim + 1) % Dim, middle + 1, right);
    return curRoot;
  }
  return NULL;
}

template <int Dim>
unsigned KDTree<Dim>::partition(vector<Point<Dim>>& list, int curDim, unsigned left,  
                                unsigned right, unsigned pivotIndex)
{
  // pivotValue for comparing within the for loop
  Point<Dim> pivotValueComparator = list.at(pivotIndex);
  // Swaps list[pivotIndex] and list[right] // Moves pivot to the end
  Point<Dim> rightValue = list.at(right);
  Point<Dim> temp = list.at(pivotIndex);
  list.at(pivotIndex) = rightValue;
  rightValue = temp;
  
  unsigned storeIndex = left;

  for (unsigned i = left; i < right - 1; i++) {
    Point<Dim> currPoint = list.at(i);
    if (smallerDimVal(currPoint, pivotValueComparator, curDim)) {
      // Swaps list[i] and list[storeIndex]
      temp = list.at(storeIndex);
      list.at(storeIndex) = currPoint;
      currPoint = temp;
      // Incremements storeIndex
      storeIndex++;
    }
  }
  // Swaps list[right] and list[storeIndex] // Moves pivot to it's final place
  temp = list.at(storeIndex);
  list.at(storeIndex) = rightValue;
  list.at(right) = temp;
  // Returns storeIndex
  return storeIndex;
}

template <int Dim>
Point<Dim> KDTree<Dim>::quickselect(vector<Point<Dim>>& list, int curDim, unsigned left, unsigned right, unsigned k)
{
  if (left == right) return list[left];
  // k is the middle value of the list within buildTree
  unsigned pivotIndex = k;
  pivotIndex = partition(list, curDim, left, right, pivotIndex);
  if (k == pivotIndex) {
    return list.at(k);
  } else if (k < pivotIndex) {
    right = pivotIndex - 1;
    quickselect(list, curDim, left, right, k);
  } else {
    left = pivotIndex + 1;
    quickselect(list, curDim, left, right, k);
  }
  return list[left];
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query, int curDim, KDTreeNode * curRoot) const
{
  // if curRoot is a leaf node
  if (curRoot != NULL && curRoot->left == NULL && curRoot->right == NULL) {
    return curRoot->point;
  }
  Point<Dim> nearest = curRoot->point; 
  Point<Dim> potential = nearest;
  bool recursed_left = false;
  // if query[dim] is on the left side
  // if query[dim] < curRoot[dim] then recurse left else recruse right
  if (smallerDimVal(query, nearest, curDim) && curRoot->left != NULL) {
    nearest = findNearestNeighbor(query, (curDim + 1) % Dim, curRoot->left);
    recursed_left = true;
  } else {
    if (curRoot->right != NULL) {
      nearest = findNearestNeighbor(query, (curDim + 1) % Dim, curRoot->right);
    }
  }
  // If curRoot is closer update nearest
  if (shouldReplace(query, nearest, potential)) {
    nearest = potential;
  }
  // Squared distance between query and nearest is used in shouldReplace
  int radius = getEuclideanDistance(query, nearest); // Radius between query and plane
  radius = radius * radius;
  // Split Distance on Plane
  int splitDist = (curRoot->point[curDim] - query[curDim])*(curRoot->point[curDim] - query[curDim]);
 
  if (radius >= splitDist) {
    // if left curRoot was recursed, recurse on right sub tree
    if (recursed_left) {
      if (curRoot -> right != NULL) {
        potential = findNearestNeighbor(query, (curDim + 1) % Dim, curRoot->right);
      }
    } else {
      if (curRoot -> left != NULL) {
        potential = findNearestNeighbor(query, (curDim + 1) % Dim, curRoot->left);
      }
    }
    if (shouldReplace(query, nearest, potential)) {
      nearest = potential;
    }
  }
  return nearest;
}
