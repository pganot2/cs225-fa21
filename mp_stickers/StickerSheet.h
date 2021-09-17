/**
 * @file StickerSheet.h
 * Contains your declaration of the interface for the StickerSheet class.
 */

#pragma once
#include <vector>
#include <memory>
#include "Image.h"

using namespace std;

class StickerSheet {
    public:
    /**
      * Initializes this StickerSheet with a deep copy of the base picture
      * and the ability to hold a max number of stickers (Images) with indices 0 through max - 1.
      * @param picture The base picture to use in the StickerSheet
      * @param max The maximum number of stickers (Images) on this StickerSheet
      */
     StickerSheet(const Image &picture, unsigned max);

     /**
      * Frees all space that was dynamically allocated by this StickerSheet.
      */
     ~StickerSheet();

     /**
      * Copy constructor: The copy constructor
      *  makes this StickerSheet an independent copy of the source.
      * @param other The other StickerSheet object to copy data from
      */
    StickerSheet(const StickerSheet &other);

    /**
      * The assignment operator for the StickerSheet class.
      * @param other The other Scene object to copy data from
      * @return a constant Scene reference
      */
    StickerSheet const & operator=(const StickerSheet &other);

    /**
      * Modifies the maximum number of stickers that can be stored on this 
      * StickerSheet without changing existing stickers' indices.
      * If the new maximum number of stickers is smaller than the current number
      * number of stickers, the stickers with indices above max - 1 will be lost.
      * @param max The new value for the maximum number of Images in the StickerSheet.
      */
    void changeMaxStickers(unsigned max);

    /**
      * Adds a sticker to the StickerSheet, so that the top-left of the sticker's
      * Image is at (x, y) on the StickerSheet. The sticker must be added to the lowest possible layer available.
      * @param sticker The Image of the sticker
      * @param x The x location of the sticker on the StickerSheet
      * @param y The y location of the sticker on the StickerSheet
      * @return The zero-based layer index the sticker was added to, or -1 if the sticker cannot be added.
      */
    int addSticker(Image &sticker, unsigned x, unsigned y);

    /**
      * Changes the x and y coordinates of the Image in the specified layer.
      * If the layer is invalid or does not contain a sticker, this function must return false.
      * Otherwise, this function returns true.
      * @param index Zero-based layer index of the sticker.
      * @param x The new x location of the sticker on the StickerSheet
      * @param y The new y location of the sticker on the StickerSheet
      * @return true if the translate was successful; otherwise false.
      */
    bool translate(unsigned index, unsigned x, unsigned y);

    /**
      * Removes the sticker at the given zero-based layer index.
      * Make sure that the other stickers don't change order.
      * @param index The layer in which to delete the png
      */
    void removeSticker(unsigned index);

    /**
      * Returns a pointer to the sticker at the specified index, not a copy of it.
      * That way, the user can modify the Image.
      * If the index is invalid, return NULL.
      * @param index The layer in which to get the sticker.
      * @return A pointer to a specific Image in the StickerSheet
      */
    Image *getSticker(unsigned index);

    /**
      * Renders the whole StickerSheet on one Image and returns that Image.\
      * The base picture is drawn first and then each sticker is drawn in order starting with layer zero (0),
      * then layer one (1), and so on.
      * If a pixel's alpha channel in a sticker is zero (0), no pixel is drawn for that sticker at that pixel.
      * If the alpha channel is non-zero, a pixel is drawn. (Alpha blending is awesome, but not required.)
      * The returned Image always includes the full contents of the picture and all stickers.
      * This means that the size of the result image may be larger than the base picture 
      * if some stickers go beyond the edge of the picture.
      * @return an Image object representing the drawn scene
      */
    Image render() const;
    private:
    /* Struct for Stickers */
    struct Sticker{
      unsigned x;
      unsigned y;
      Image *image;
      //std::unique_ptr<Image> image;
    };
    /*
    std::vector<Sticker> stickers;
    unsigned maxStickers;
    std::unique_ptr<Image> basePicture;
    std::unique_ptr<Image> renderImage;
    */
    Sticker *stickers;          /*< Array of Sticker pointers */
    unsigned maxStickers;
    Image *basePicture;
    Image *renderImage;

    /**
     * Copies the contents of `other` to self
     */
    void _copy(StickerSheet const & other);

    /**
     * Destroys the contents of self
     */
    void _destroy();
};
