/**
 * @file BFS.h
 */

#pragma once

#include <iterator>
#include <cmath>
#include <list>
#include <queue>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

using namespace cs225;

/**
 * A breadth-first ImageTraversal.
 * Derived from base class ImageTraversal
 */
class BFS : public ImageTraversal {
public:
  BFS(const PNG & setPNG, const Point & setStart, double setTolerance);

  ImageTraversal::Iterator begin();
  ImageTraversal::Iterator end();

  void add(const Point & point);
  Point pop();
  Point peek() const;
  bool empty() const;

private:
  /** @todo [Part 1] */
  /** add private members here*/
  
  /** PNG image to traverse on*/
    PNG png;

    /** Provided start point for an image traversal*/
    Point start;

    /** Current point for an image traversal*/
    Point current;
  
    /** Provided tolerance value for an image traversal*/
    double tolerance;
    
    /** Queue to store Point objects for BFS*/
    std::queue<Point> queue;
};
