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
    //ImageTraversal();
    // add own constructor that constructs a DFS or BFS
    Iterator & operator++();
    Point operator*();
    bool operator!=(const Iterator &other);

    /** @todo [Part 1] */
    /** add member functions if neccesary*/
    bool checkTolerance(Point &p);
  private:
    /** @todo [Part 1] */
    /** add private members here if neccesary*/
    ImageTraversal* traversal;
    // Every ImageTraversal will start at a provided Point
    Point start;
    // ImageTraversal::end() exists, so an end variable might be useful to signify the end
    Point current;
    // The point has already been visited (a traversal never visits the same point twice)
    PNG png;
    double tolerance;
    int rows;
    int cols;
    //vector<bool> visited; 2D vector that tells if Point  (x,y) visited
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
