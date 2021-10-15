#include "cs225/PNG.h"
#include <list>
#include <iostream>

#include "colorPicker/ColorPicker.h"
#include "imageTraversal/ImageTraversal.h"

#include "Point.h"
#include "Animation.h"
#include "FloodFilledImage.h"

using namespace cs225;

/**
 * Constructs a new instance of a FloodFilledImage with a image `png`.
 * 
 * @param png The starting image of a FloodFilledImage
 */
FloodFilledImage::FloodFilledImage(const PNG & png)
  :png(png)
{
  /** @todo [Part 2] */
}

/**
 * Adds a FloodFill operation to the FloodFillImage.  This function must store the operation,
 * which will be used by `animate`.
 * 
 * @param traversal ImageTraversal used for this FloodFill operation.
 * @param colorPicker ColorPicker used for this FloodFill operation.
 */
void FloodFilledImage::addFloodFill(ImageTraversal & traversal, ColorPicker & colorPicker) {
  /** @todo [Part 2] */
  traversal_.push_back(&traversal);
  color_picker.push_back(&colorPicker);
}

/**
 * Creates an Animation of frames from the FloodFill operations added to this object.
 * 
 * Each FloodFill operation added by `addFloodFill` is executed based on the order
 * the operation was added.  This is done by:
 * 1. Visiting pixels within the image based on the order provided by the ImageTraversal iterator and
 * 2. Updating each pixel to a new color based on the ColorPicker
 * 
 * While applying the FloodFill to the image, an Animation is created by saving the image
 * after every `frameInterval` pixels are filled.  To ensure a smooth Animation, the first
 * frame is always the starting image and the final frame is always the finished image.
 * 
 * (For example, if `frameInterval` is `4` the frames are:
 *   - The initial frame
 *   - Then after the 4th pixel has been filled
 *   - Then after the 8th pixel has been filled
 *   - ...
 *   - The final frame, after all pixels have been filed)
 */ 
Animation FloodFilledImage::animate(unsigned frameInterval) const {
  Animation animation;
  /** @todo [Part 2] */
  // Plan:
  // Traverse PNG with traversal_ iterator
  // Professor Evans: "You need to be storing a traversal each time addFloodFill is called and in animate do them each in order.""
  // Use a PNG copy of image png since we can't edit png private variable
  // Does each type of traversal in the vector traversal
  // get Point // pixel from traversal_
  // get color for pixel from color_picker

  PNG curr_image = png;
  // Iterates over traversal vector to get which traversal we want.
  for (unsigned i = 0; i < traversal_.size(); i++) {
    ImageTraversal* curr_traversal = traversal_[i];
    // Does the traversal
    unsigned interval = 0;
    for (ImageTraversal::Iterator it = curr_traversal->begin(); it != curr_traversal->end(); ++it) {
      // Adds frame after certain interval number
      if (interval % frameInterval == 0) {
        animation.addFrame(curr_image);
      }
      interval++;
      // Gets the pixel from the traversal
      cs225::HSLAPixel & pixel = curr_image.getPixel((*it).x, (*it).y);
      // Changes pixel color based on color_picker
      pixel = color_picker[i]->getColor((*it).x, (*it).y);
    }
  }
  animation.addFrame(curr_image);

  return animation;
}
