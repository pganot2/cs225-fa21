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
    // Get Euclidean distances to target for both potential and currentBest
    // If Euclidean distances are equal then when simply do
    // currentBest < potential 
    // Returns true if potential is closer (i.e., has a smaller euclidean distance) to target than current Best
    if (getEuclideanDistance(target, potential) < getEuclideanDistance(target, currentBest))
      return true;
    if (getEuclideanDistance(target, potential) > getEuclideanDistance(target, currentBest))
      return false;
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

    return Point<Dim>();
}

template <int Dim>
int KDTree<Dim>::getEuclideanDistance(const Point<Dim>& point1, const Point<Dim>& point2) const
{
  int sum = 0;
  for (int i = 0; i < Dim; i++) {
    sum += (point1[i] - point2[i])*(point1[i] - point2[i]);
  }
  return sqrt(sum);
}

