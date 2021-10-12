/**
 * @file ImageTraversal.h
 */
#pragma once

#include <iterator>
#include <vector>
#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

using namespace cs225;

/**
 * A base class for traversal algorithms on images.
 *
 * BFS and DFS will inherit from this class
 * 
 * Each derived class must maintain an ordering of points on an image,
 * through calls to the virtual member functions `add` and `pop`.
 * 
 * A derived class provides a traversal by returning instances of
 * ImageTraversal::Iterator.
 */
class ImageTraversal {
public:
  /**
   * A forward iterator through an ImageTraversal.
   */
  class Iterator : std::iterator<std::forward_iterator_tag, Point> {
  public:
    Iterator();
    Iterator(PNG & setPNG, Point & setStart, double & setTolerance, ImageTraversal* setTraversal);

    Iterator & operator++();
    Point operator*();
    bool operator!=(const Iterator &other);

    /** @todo [Part 1] */
    /** add member functions if neccesary*/
    bool checkTolerance(Point &p);
  private:
    /** @todo [Part 1] */
    /** add private members here if neccesary*/

    /** PNG image to traverse on*/
    PNG png;

    /** Provided start point for an image traversal*/
    Point start;

    /** Current point for an image traversal*/
    Point current;
  
    /** Provided tolerance value for an image traversal*/
    double tolerance;

    /** An ImageTraversal instance used for signifiying whether its a DFS or BFS*/
    ImageTraversal* traversal;

    /** Amount of rows in an image for a traversal*/
    unsigned int rows;

    /** Amount of columns in an image for a traversal*/
    unsigned int columns;
    
    /** 2D boolean vector that tells if a Point(x, y) has been visited*/
    std::vector<std::vector<bool>> visited;
  };

  /**
   * The begining of an iterator
   * Virtual function. Derived class need to implement this
   */
  virtual Iterator begin() = 0;

  /**
   * The end of an iterator
   * Virtual function. Derived class need to implement this
   */
  virtual Iterator end() = 0;

  /**
   * Add new point to the traversal
   * Virtual function. Derived class need to implement this
   */
  virtual void add(const Point & t) = 0;
  /**
   * Remove and return the next point of the traversal
   * Virtual function. Derived class need to implement this
   */
  virtual Point pop() = 0;
  /**
   * Return but not remove the next point of the traversal
   * Virtual function. Derived class need to implement this
   */
  virtual Point peek() const = 0;
  /**
   * To see if the traversal has no points left
   * Virtual function. Derived class need to implement this
   */
  virtual bool empty() const = 0;

private:
  static double calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2);  
};
