#include "Image.h"
#include "StickerSheet.h"

int main() {

  Image bernie, leak, emotional;
  bernie.readFromFile("Stickers/bernie.png");
  leak.readFromFile("Stickers/leak.png");
  emotional.readFromFile("Stickers/emotional.png");

  StickerSheet sheet(bernie, 5);
  sheet.addSticker(leak, 25, 270);
  sheet.addSticker(emotional, bernie.width()/2 - 90, 460);

  Image output = sheet.render();
  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //
  output.writeToFile("myImage.png");

  return 0;
}
