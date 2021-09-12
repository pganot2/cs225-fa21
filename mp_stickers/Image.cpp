/**
 * @file Image.cpp
 * Implementation of a simple Image class using HSLAPixels and the lodepng Image library.
 *
 * @author PJ Ganotisi
 */

#include <iostream>

using namespace std;

#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
#include "Image.h"

void Image::lighten() {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel & pixel = getPixel(x, y);
            if ((pixel.l + 0.1) > 1.0) {
                pixel.l = 1.0;
            } else {
                pixel.l = pixel.l + 0.1;
            }
        }
    }
}

void Image::lighten(double amount) {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel & pixel = getPixel(x, y);
            if ((pixel.l + amount) > 1.0) {
                pixel.l = 1.0;
            } else {
                pixel.l = pixel.l + amount;
            }
        }
    }
}

void Image::darken() {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel & pixel = getPixel(x, y);
            if ((pixel.l - 0.1) < 0.0) {
                pixel.l = 0.0;
            } else {
                pixel.l = pixel.l - 0.1;
            }
        }
    }
}

void Image::darken(double amount) {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel & pixel = getPixel(x, y);
            if ((pixel.l - amount) < 0.0) {
                pixel.l = 0.0;
            } else {
                pixel.l = pixel.l - amount;
            }
        }
    }
}

void Image::saturate() {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel & pixel = getPixel(x, y);
            if ((pixel.s + 0.1) > 1.0) {
                pixel.s = 1.0;
            } else {
                pixel.s = pixel.s + 0.1;
            }
        }
    }
}

void Image::saturate(double amount) {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel & pixel = getPixel(x, y);
            if ((pixel.s + amount) > 1.0) {
                pixel.s = 1.0;
            } else {
                pixel.s = pixel.s + amount;
            }
        }
    }
}

void Image::desaturate() {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel & pixel = getPixel(x, y);
            if ((pixel.s - 0.1) < 0.0) {
                pixel.s = 0.0;
            } else {
                pixel.s = pixel.s - 0.1;
            }
        }
    }
}

void Image::desaturate(double amount) {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel & pixel = getPixel(x, y);
            if ((pixel.s - amount) < 0.0) {
                pixel.s = 0.0;
            } else {
                pixel.s = pixel.s - amount;
            }
        }
    }
}

void Image::grayscale() {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel & pixel = getPixel(x, y);
            pixel.s = 0;
        }
    }
}

void Image::rotateColor(double degree) {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel & pixel = getPixel(x, y);
            if ((pixel.h + degree) > 360) {
                pixel.h = 0 + (degree - (360 - pixel.h));
            } else {
                pixel.h = pixel.h + degree;
            }
        }
    }
}

void Image::illinify() {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel & pixel = getPixel(x, y);
            if (pixel.h > 113.5 and pixel.h < 293) {
                pixel.h = 216;
            } else {
                pixel.h = 11;
            }
        }
    }
}

void Image::scale(double factor) {

    //newWidth and newHeight expands image borders and creates white spaces
    unsigned newWidth = width() * factor;

    unsigned newHeight = height() * factor;
    //Store a copy of current Image (image before expansion)
    Image oldImage = Image(*this);
    //resize THIS image
    resize(newWidth, newHeight); 

    //Use oldImage to align it to the larger border image
    for (unsigned x = 0; x < newWidth; x++) {
        for (unsigned y = 0; y < newHeight; y++) {
            cs225::HSLAPixel & pixel = getPixel(x, y);
            // x / 2 and y / 2 causes the function not to overtruncate or be out of bounds
            cs225::HSLAPixel & oldPixel = oldImage.getPixel(x / 2, y / 2);
            pixel = oldPixel;
        }
    }
}

void Image::scale(unsigned w, unsigned h) {
    return;
}



