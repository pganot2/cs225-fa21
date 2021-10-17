
#include "cs225/PNG.h"
#include "FloodFilledImage.h"
#include "Animation.h"

#include "imageTraversal/DFS.h"
#include "imageTraversal/BFS.h"

#include "colorPicker/RainbowColorPicker.h"
#include "colorPicker/GradientColorPicker.h"
#include "colorPicker/GridColorPicker.h"
#include "colorPicker/SolidColorPicker.h"
#include "colorPicker/MyColorPicker.h"

using namespace cs225;

int main() {

  // @todo [Part 3]
  // - The code below assumes you have an Animation called `animation`
  // - The code provided below produces the `myFloodFill.png` file you must
  //   submit Part 3 of this assignment -- uncomment it when you're ready.
  PNG png;
  // png.readFromFile("HuskyPUP.png");
  // std::cout << png.height() << " " << png.width() << std::endl;
  // FloodFilledImage image(png);
  // BFS bfs(png, Point(385, 90), 1.00);
  // DFS dfs(png, Point(0, 0), 0.05);
  // MyColorPicker myColor("HuskyPUP.png");
  // RainbowColorPicker rainbow(0.05);
  // image.addFloodFill( bfs, myColor );

  // png.readFromFile("RedLightGreenLight (1).png");
  // std::cout << png.height() << " " << png.width() << std::endl;
  // FloodFilledImage image(png);
  // DFS dfs(png, Point(100, 450), 0.70);
  // DFS dfs2(png, Point(490, 450), 0.70);
  // DFS dfs3(png, Point(140, 410), 0.70);
  // DFS dfs4(png, Point(450, 410), 0.70);
  // DFS dfs5(png, Point(400, 115), 0.70);
  // DFS dfs6(png, Point(300, 500), 0.70);
  // DFS dfs7(png, Point(300, 540), 0.70);
  // DFS dfs8(png, Point(150, 540), 0.70);
  // DFS dfs9(png, Point(445, 540), 0.70);
  // DFS dfs10(png, Point(300, 365), 0.70);
  // DFS dfs11(png, Point(300, 385), 0.70);
  // DFS dfs12(png, Point(450, 380), 0.70);
  // DFS dfs13(png, Point(375, 100), 0.70);
  // DFS dfs_O(png, Point(0, 0), 0.70);

  // BFS bfs(png, Point(300, 100), 0.70);
  // BFS bfs2(png, Point(300, 300), 0.70);
  // BFS bfs3(png, Point(235, 275), 0.70); // Eyes
  // BFS bfs4(png, Point(365, 275), 0.70); // Eyes

  // HSLAPixel pixel(0, 0, 0);
  // HSLAPixel pixel2(300, 1, .25, 0.70);
  // HSLAPixel pixel3(36, 0.87, 0.75, 1); // Skin Color
  // HSLAPixel pixel4(0, 1, .31, 1); // Eye color
  // HSLAPixel pixel5(20, 0.96, 0.42, 1); // Orange
  // HSLAPixel pixel6(54, 1, 0.48, 1); // Yellow
  // HSLAPixel pixel7(343, 0.81, 0.51, 1); // Pink

  // SolidColorPicker black(pixel);
  // SolidColorPicker purple(pixel2);
  // SolidColorPicker skin(pixel3);
  // SolidColorPicker eyes(pixel4);
  // SolidColorPicker shirt1(pixel5);
  // SolidColorPicker shirt2(pixel6);
  // SolidColorPicker lips(pixel7);
  // MyColorPicker myColor("background.png");

  // image.addFloodFill( dfs, black ); // Pigtail 1
  // image.addFloodFill( dfs2, black ); // Pigtail 2
  // image.addFloodFill( dfs3, purple ); // Pigtail 1 tie
  // image.addFloodFill( dfs4, purple ); // Pigtail 2 tie
  // image.addFloodFill( bfs, black ); // Hair
  // image.addFloodFill( dfs13, purple ); // Hair tie
  // image.addFloodFill( bfs2, skin ); // Face
  // image.addFloodFill( dfs6, skin ); // Neck
  // image.addFloodFill( dfs7, shirt1 );
  // image.addFloodFill( dfs8, shirt2 );
  // image.addFloodFill( dfs9, shirt2 );
  // image.addFloodFill( dfs10, lips );
  // image.addFloodFill( dfs11, lips );
  // image.addFloodFill( dfs12, black );
  // image.addFloodFill( bfs3, eyes );
  // image.addFloodFill( bfs4, eyes );
  // image.addFloodFill( dfs_O, myColor );

  // Animation animation = image.animate(3000);

  png.readFromFile("white.png");
  std::cout << png.height() << " " << png.width() << std::endl;

  FloodFilledImage image(png);
  DFS dfs(png, Point(0, 0), 1.50);
  DFS dfs2(png, Point(650, 350), 1.00);
  DFS dfs3(png, Point(50, 580), 1.00);
  MyColorPicker layer("squid.png");
  MyColorPicker layer2("squid2.png");
  MyColorPicker layer3("squid3.png");
  image.addFloodFill( dfs3, layer );
  image.addFloodFill( dfs, layer2 );
  image.addFloodFill( dfs2, layer3 );
  
  Animation animation = image.animate(9000);

  PNG lastFrame = animation.getFrame( animation.frameCount() - 1 );
  lastFrame.writeToFile("myFloodFill.png");
  animation.write("myFloodFill.gif");

  return 0;
}
