/**
 * @file DFS.h
 */

#pragma once

#include <iterator>
#include <cmath>
#include <list>
#include <stack>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

using namespace cs225;

/**
 * A depth-first ImageTraversal.
 * Derived from base class ImageTraversal
 */
class DFS : public ImageTraversal {
public:
  DFS(const PNG & setPNG, const Point & setStart, double setTolerance);

  ImageTraversal::Iterator begin();
  ImageTraversal::Iterator end();

  void add(const Point & point);
  Point pop();
  Point peek() const;
  bool empty() const;

private:
	/** @todo [Part 1] */
	/** add private members here*/
  std::stack<Point> stack;
  PNG png;
  Point start;
  Point current;
  double tolerance;
};
