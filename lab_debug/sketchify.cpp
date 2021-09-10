/**
 * @file sketchify.cpp
 * Implementation of the sketchify function.
 */
#pragma GCC diagnostic ignored "-Wuninitialized"
#include <cstdlib>
#include <cmath>

#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
using namespace cs225;

/**
 * Creates a new output image.

 * @param w width of the image
 * @param h height of the image

 * @return a pointer to the newly-created image
 */
PNG *setupOutput(unsigned w, unsigned h) {
    PNG *image = new PNG(w, h);
    return image;
}

/**
 * Used to customize the color of the sketchified image.

 * @return a pointer to the color to use when sketchifying
 */
HSLAPixel *myFavoriteColor() {
    /**
     * Changes made:
     * *p is now a variable that holds a pointer.
     * 
       'new' keyword added to return a pointer address for HSLAPixel.

       return 'p' instead of '&p' as '&' will change 'p' into a reference.

       Changed color to dark blue with color code #004.
     */
    HSLAPixel *p = new HSLAPixel(240.0, 1.0, 0.13);
    return p;
}

void sketchify(std::string inputFile, std::string outputFile) {
    // Load in.png
    /**
     * Changes made:
     * * 'original' is now a variable that holds a pointer '*original'.
     * 
       'new' keyword added to return a pointer address for a default constructor PNG.
     */
    PNG *original = new PNG();
    original->readFromFile(inputFile);
    
    unsigned width = original->width();
    unsigned height = original->height();
    
    // Create out.png
    // changes made: made *output a variable that holds a pointer
    PNG *output = setupOutput(width, height);
    
    // Load our favorite color to color the outline
    HSLAPixel *myPixel = myFavoriteColor();

    // Go over the whole image, and if a pixel differs from that to its upper
    // left, color it my favorite color in the output
    /**
     * Changes made:
       Removed 0 < y < height changed to y < height.
       Removed 0 < x < width changed to x < width.
     * Added '&' to currOutPixel to signify that it is a reference to a pointer.
     */
    for (unsigned y = 1; y < height; y++) {
        for (unsigned x = 1; x < width; x++) {
            // Calculate the pixel difference
            HSLAPixel &prev = original->getPixel(x - 1, y - 1);
            HSLAPixel &curr = original->getPixel(x, y);
            double diff = std::fabs(curr.h - prev.h);

            // If the pixel is an edge pixel,
            // color the output pixel with my favorite color
            HSLAPixel &currOutPixel = output->getPixel(x, y);
            if (diff > 20) {
                currOutPixel = *myPixel;
            }
        }
    }

    // Save the output file
    output->writeToFile(outputFile);

    // Clean up memory
    delete myPixel;
    delete output;
    delete original;
}
