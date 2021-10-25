/**
 * @file maptiles.cpp
 * Code for the maptiles function.
 */

#include <iostream>
#include <map>
#include "maptiles.h"
//#include "cs225/RGB_HSL.h"

using namespace std;


Point<3> convertToXYZ(LUVAPixel pixel) {
    return Point<3>( pixel.l, pixel.u, pixel.v );
}

MosaicCanvas* mapTiles(SourceImage const& theSource,
                       vector<TileImage>& theTiles)
{
    /**
     * @todo Implement this function!
     */
    // It creates a new dynamically allocated MosaicCanvas
    //, with the same number of rows and columns as the SourceImage,
    // and returns a pointer to this object.
    MosaicCanvas* canvas = new MosaicCanvas(theSource.getRows(), theSource.getColumns());
    
    // Vector of points to be used to initialize kd_tree
    vector<Point<3>> points;
    // Map to assign a point to a specific Tile Image
    map<Point<3>, TileImage*> map;

    for (auto it = theTiles.begin(); it != theTiles.end(); ++it) {
        // Get average color of the region in SourceImage and mapTiles();
        LUVAPixel pixel = it->getAverageColor();

        Point<3> point = convertToXYZ(pixel);

        points.push_back(point);

        map[point] = &*it;
    }

    // KDTree to findNearestNeighbor of query point(LUVAPixel converted to Point<3>)
    KDTree<3> tree(points);

    // Loop the same size as SoureImage to place that TileImage into the MosaicCanvas 
    // in the same tile position.
    for (int i = 0; i < theSource.getRows(); i++) {
        for (int j = 0; j < theSource.getColumns(); j++) {

            LUVAPixel sourceImagePixel = theSource.getRegionColor(i, j);

            Point<3> query = convertToXYZ(sourceImagePixel);

            Point<3> nearest = tree.findNearestNeighbor(query);
            // Gets best possible tile in map using the nearest pixel
            TileImage* best_tile = map[nearest];

            // Places that TileImage onto MosaicCanvas
            canvas->setTile(i, j, best_tile);
        }
    }
    return canvas;
}

