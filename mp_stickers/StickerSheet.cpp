/**
 * @file StickerSheet.cpp
 * Implementation of a simple StickerSheet class.
 *
 * @author PJ Ganotisi
 */

#include <iostream>

#include "cs225/PNG.h"
#include "StickerSheet.h"
#include "Image.h"
#include <algorithm>
#include <iterator>
#include <vector>
#include <memory>

using namespace std;

/*
void StickerSheet::_copy(StickerSheet const & other) {
    //Copy 'other' to self
    maxStickers = other.maxStickers;
    std::unique_ptr<Image> basePicture(new Image(*(other.basePicture)));
    std::unique_ptr<Image> renderImage(new Image(*(other.renderImage)));
    copy(other.stickers.begin(), other.stickers.end(), back_inserter(stickers));
} */

void StickerSheet::_copy(StickerSheet const & other) {
    //Copy 'other' to self
    maxStickers = other.maxStickers;
    basePicture = new Image(*(other.basePicture));
    renderImage = new Image(*(other.renderImage));
    stickers = new Sticker[maxStickers]();
    for (unsigned i = 0; i < maxStickers; i++) {
        if (other.stickers[i].image != NULL) {
            stickers[i].image = new Image(*(other.stickers[i].image));
            stickers[i].x = other.stickers[i].x;
            stickers[i].y = other.stickers[i].y;
        }
    }
}

void StickerSheet::_destroy() {
    if (basePicture != NULL) {
        delete basePicture;
        basePicture = NULL;
    }
    if (renderImage != NULL) {
        delete renderImage;
        renderImage = NULL;
    }
    if (stickers != NULL) {
        // delete all the new Images in each Sticker in the StickerSheet
        for (unsigned i = 0; i < maxStickers; i++) {
            if (stickers[i].image != NULL) {
            delete stickers[i].image;
            stickers[i].image = NULL;
        }
      }
    }
    // free the array
    delete[] stickers;
    stickers = NULL;
}

StickerSheet::StickerSheet(const Image &picture, unsigned max) {
    maxStickers = max;
    basePicture = new Image(picture);
    renderImage = new Image();
    stickers = new Sticker[max]();
}

//StickerSheet::~StickerSheet() = default;

StickerSheet::~StickerSheet() {
    _destroy();
} 
//StickerSheet::StickerSheet(const StickerSheet &other) = default;
StickerSheet::StickerSheet(const StickerSheet &other) {
    _copy(other);
}
//StickerSheet const & StickerSheet::operator=(const StickerSheet &other) = default;

StickerSheet const & StickerSheet::operator=(const StickerSheet &other) {
    if (this != &other) {
        // Use helper function
        _destroy();
        _copy(other);
    }
    return *this;
}

void StickerSheet::changeMaxStickers(unsigned max){
    // New Array of new Maximum size
    Sticker * newMaxStickers = new Sticker[max]();
    // If input maxVal is less than than current 
    for (unsigned i = 0; i < maxStickers; i++) {
        if (i < max) {
            newMaxStickers[i].image = stickers[i].image;
            newMaxStickers[i].x = stickers[i].x;
            newMaxStickers[i].y = stickers[i].y;
        } else {
            if (stickers[i].image != NULL) {
                delete stickers[i].image;
                stickers[i].image = NULL;
            }
        }
    }
    delete [] stickers;
    stickers = newMaxStickers;
    maxStickers = max;
}

int StickerSheet::addSticker(Image &sticker, unsigned x, unsigned y) {
    //loop through vector to add a new sticker
    // probably wrong af
    for (unsigned i = 0; i < maxStickers; i++) {
        if (stickers[i].image == NULL) {
            stickers[i].image = new Image(sticker);
            stickers[i].x = x;
            stickers[i].y = y;
            return i;
        }
    }
    return -1;
}

bool StickerSheet::translate(unsigned index, unsigned x, unsigned y) {
    if (index < maxStickers) {
        if (stickers[index].image != NULL) {
            stickers[index].x = x;
            stickers[index].y = y;
            return true;
        }
    }
    return false;
}

void StickerSheet::removeSticker(unsigned index) {
    if (index < maxStickers) {
        if (stickers[index].image != NULL) {
            delete stickers[index].image;
            stickers[index].image = NULL;
            stickers[index].x = 0;
            stickers[index].y = 0;
        }
    }
}

Image* StickerSheet::getSticker(unsigned index) {
    if (index < maxStickers) {
        return stickers[index].image;
    }
    return NULL;
}

Image StickerSheet::render() const {
    unsigned maxWidth = basePicture->width();
    unsigned maxHeight = basePicture->height();
    // Initializes maxWidth/Height by checking to see if specific image + x value has bigger width/height
    for (unsigned i = 0; i < maxStickers; i++) {
        if (stickers[i].image != NULL) {
            maxWidth = max(maxWidth, stickers[i].x + stickers[i].image->width());
            maxHeight = max(maxHeight, stickers[i].y + stickers[i].image->height());
        }
    }
    *renderImage = *basePicture;
    renderImage->resize(maxWidth, maxHeight);

    // Pasting Sticker over Base picture kind of like scale in part1
    //Alligning a Sticker to it's spot on the StickerSheet
    for (unsigned i = 0; i < maxStickers; i++) {
        if (stickers[i].image != NULL) {
            for (unsigned x = 0; x < stickers[i].image->width(); x++) {
                for (unsigned y = 0; y < stickers[i].image->height(); y++) {
                    cs225::HSLAPixel & basePicPixel = renderImage->getPixel(x + stickers[i].x, y + stickers[i].y);
                    cs225::HSLAPixel & stickerPixel = stickers[i].image->getPixel(x, y);
                    if (stickerPixel.a != 0) {
                        basePicPixel = stickerPixel;
                    }
                }
            }
        }
    }
    //put sticker to base
    //Put sticker on x y coordinate of sticker
    return *renderImage;
}