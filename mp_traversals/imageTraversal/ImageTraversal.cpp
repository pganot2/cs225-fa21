#include <cmath>
#include <iterator>
#include <iostream>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

using namespace cs225;

/**
 * Calculates a metric for the difference between two pixels, used to
 * calculate if a pixel is within a tolerance.
 *
 * @param p1 First pixel
 * @param p2 Second pixel
 * @return the difference between two HSLAPixels
 */
double ImageTraversal::calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2) {
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180) { h = 360 - h; }
  h /= 360;

  return sqrt( (h*h) + (s*s) + (l*l) );
}

/**
 * Default iterator constructor.
 */
ImageTraversal::Iterator::Iterator() {
  /** @todo [Part 1] */
  traversal = NULL;
}

/**
 * iterator constructor.
 */
ImageTraversal::Iterator::Iterator(PNG & setPNG, Point & setStart, double & setTolerance, ImageTraversal* setTraversal)
  :png(setPNG), start(setStart), tolerance(setTolerance), traversal(setTraversal)
{
  /** @todo [Part 1] */

  current = traversal->peek();
  rows = png.height();
  columns = png.width();
  //Sets convention so that x coordinates are the y-axis
  // visited.resize(columns);
  // for (unsigned i = 0; i < rows; i++) {
  //   visited[i].resize(rows);
  // }
  visited = std::vector<std::vector<bool>>(columns, std::vector<bool>(rows, false));
}

/**
 * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator & ImageTraversal::Iterator::operator++() {
  /** @todo [Part 1] */

  // Assume current point is top most element
  
  // Initalize current as startPoint

  // Marks current as visited
  visited[current.x][current.y] = true;

  cs225::HSLAPixel & p1 = png.getPixel(start.x, start.y);

  // Pushes current and neighbors to stack
  // Checks if point on the right is within the bounds of the png
  if ((current.x + 1 < columns) && (current.y < rows)) {
    // Point on the right
    Point right(current.x + 1, current.y);
    // Pixel of the point on the right
    cs225::HSLAPixel & p2 = png.getPixel(right.x, right.y);
    double delta = calculateDelta(p1, p2);
    if (delta < tolerance) {
      traversal->add(right);
    }
  }

  // Checks if pixel below is within the bounds of the png
  if ((current.x < columns) && (current.y + 1 < rows)) {
    // Point below
    Point below(current.x, current.y + 1);
    // Pixel of the point below
    cs225::HSLAPixel & p2 = png.getPixel(below.x, below.y);
    double delta = calculateDelta(p1, p2);
    if (delta < tolerance) {
      traversal->add(below);
    }
  }

  // Checks if point to the left is within the bounds of the png
  if ((current.x - 1 < columns) && (current.y < rows)) {
    // Point on the left
    Point left(current.x - 1, current.y);
    // Pixe of the point on the left
    cs225::HSLAPixel & p2 = png.getPixel(left.x, left.y);
    double delta = calculateDelta(p1, p2);
    if (delta < tolerance) {
      traversal->add(left);
    }
  }

  // Checks if pixel above is within the bounds of the png
  if ((current.x < columns) && (current.y - 1 < rows)) {
    // Point above
    Point above(current.x, current.y - 1);
    // Pixe of the point on the right
    cs225::HSLAPixel & p2 = png.getPixel(above.x, above.y);
    double delta = calculateDelta(p1, p2);
    if (delta < tolerance) {
      traversal->add(above);
    }
  }

  current = traversal->peek();
  
  while (!(traversal->empty()) && visited[current.x][current.y]) {
    current = traversal->pop();
  }

  // If stack // queue is empty, then we are done.
  if (traversal->empty()) {
    // Sets traversal = NULL indicating that we are finished
    traversal = NULL;
    return *this;
  }

  return *this; // Check Edge Cases for future tests
}

/**
 * Iterator accessor operator.
 *
 * Accesses the current Point in the ImageTraversal.
 */
Point ImageTraversal::Iterator::operator*() {
  /** @todo [Part 1] */
  //return Point(0, 0);
  return current;
}

/**
 * Iterator inequality operator.
 *
 * Determines if two iterators are not equal.
 */
bool ImageTraversal::Iterator::operator!=(const ImageTraversal::Iterator &other) {
  /** @todo [Part 1] */
  // Check if iteration part of iterator are the same current and traversal
  // At the end of iteration equal to end();

  if (traversal == NULL && other.traversal == NULL) {
    return false;
  }

  return true;
}

