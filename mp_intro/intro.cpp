#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

#include <string>


void rotate(std::string inputFile, std::string outputFile) {
  cs225::PNG alma;
  alma.readFromFile(inputFile);
  //Rotate the alma png (pixel starts (x,y)) ends (width - x, height - y)
  // TODO: Part 2
  unsigned int width = alma.width();
  unsigned int height = alma.height();
  for (unsigned x = 0; x < width; x++) {
    for (unsigned y = 0; y < height / 2; y++) {
      cs225::HSLAPixel & pixel = alma.getPixel(x, y);
      cs225::HSLAPixel & oppPixel = alma.getPixel(width - x - 1, height - y - 1);
      std::swap(pixel, oppPixel);
    }
  }
  alma.writeToFile(outputFile);
}

cs225::PNG myArt(unsigned int width, unsigned int height) {
  cs225::PNG png(width, height);
  // TODO: Part 3

  return png;
}
