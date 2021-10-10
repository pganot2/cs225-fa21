#include <cmath>
#include <iterator>
#include <iostream>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

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
}

/**
 * iterator constructor.
 */
ImageTraversal::Iterator::Iterator(PNG & setPNG, Point & setStart, double & setTolerance, ImageTraversal* setTraversal)
  :png(setPNG), start(setStart), tolerance(setTolerance), traversal(setTraversal)
{
  /** @todo [Part 1] */
  //png = setPNG;
  //start = setStart;
  //tolerance = setTolerance;
  //traversal = setTraversal;
  current = traversal->peek();
  rows = png.height();
  columns = png.width();
  visited.resize(rows);
  for (unsigned i = 0; i < rows; i++) {
    visited[i].resize(columns);
  }
}

/**
 * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator & ImageTraversal::Iterator::operator++() {
  /** @todo [Part 1] */
  // use vector visited here
  // Check if point is visited // or not out of bounds
  // Use add()
  
  return *this;
}

/**
 * Iterator accessor operator.
 *
 * Accesses the current Point in the ImageTraversal.
 */
Point ImageTraversal::Iterator::operator*() {
  /** @todo [Part 1] */
  //return Point(0, 0);
  return traversal->peek();
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
  // bool thisEmpty = false; 
  // bool otherEmpty = false;
  // if (traversal == NULL) { thisEmpty = true; }
  // if (other.traversal == NULL) { otherEmpty = true; }

  // if (!thisEmpty)  { thisEmpty = traversal->empty(); }
  // if (!otherEmpty) { otherEmpty = other.traversal->empty(); }

  // if (thisEmpty && otherEmpty) return false; // both empty then the traversals are equal, return true
  // else if ((!thisEmpty)&&(!otherEmpty)) return (traversal != other.traversal); //both not empty then compare the traversals
  // else return true; // one is empty while the other is not, return true
  return false;
}

