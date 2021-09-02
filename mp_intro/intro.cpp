#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

#include <string>

void rotate(std::string inputFile, std::string outputFile) {
  cs225::PNG png;
  png.readFromFile(inputFile);
  //Rotate the alma png (pixel starts (x,y)) ends (width - x, height - y)
  // TODO: Part 2
  unsigned int width = png.width();
  unsigned int height = png.height();
  if (height % 2 != 0) {
    for (unsigned x = 0; x < width/2; x++) {
        cs225::HSLAPixel & Xposition = png.getPixel(x, height / 2);
        cs225::HSLAPixel & oppXposition = png.getPixel(width - x - 1, height / 2);
        std::swap(Xposition, oppXposition);
     }
  }
  for (unsigned x = 0; x < width; x++) {
    for (unsigned y = 0; y < height / 2; y++) {
      cs225::HSLAPixel & pixel = png.getPixel(x, y);
      cs225::HSLAPixel & oppPixel = png.getPixel(width - x - 1, height - y - 1);
      std::swap(pixel, oppPixel);
      }
    }
  png.writeToFile(outputFile);
}

cs225::PNG myArt(unsigned int width, unsigned int height) {
  cs225::PNG png(width, height);
  // TODO: Part 3

  for (unsigned x = 0; x < width - 1; x++) {
    for (unsigned y = 0; y < height - 1; y++) {
      cs225::HSLAPixel & pixel = png.getPixel(x, y);
      pixel.h = rand() % 359 + 1;
      pixel.s = 1;
      pixel.l = 0.5;
      pixel.a = 1.0;
    }
  }
  return png;
}
