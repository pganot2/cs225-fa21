#include "../cs225/HSLAPixel.h"
#include "../Point.h"

#include "ColorPicker.h"
#include "MyColorPicker.h"
#include "../cs225/PNG.h"
#include <string>

using namespace cs225;

/**
 * MyColorPicker constructor
 */
MyColorPicker::MyColorPicker(const std::string file) {
  png.readFromFile(file);
}

/**
 * Picks the color for pixel (x, y).
 * Using your own algorithm
 */
HSLAPixel MyColorPicker::getColor(unsigned x, unsigned y) {
  /* @todo [Part 3] */
  // Gray scale an image like a Flood Fill!
  // HSLAPixel pixel = png.getPixel(x, y);
  // pixel.s = 0;

  HSLAPixel & pixel = png.getPixel(x, y);

  // if (pixel.h > 113.5 and pixel.h < 293) {
  //   pixel.h = 216;
  // } else {
  //   pixel.h = 11;
  // }
  
  return pixel;
}
