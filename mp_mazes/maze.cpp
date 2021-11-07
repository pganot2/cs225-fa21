/* Your code here! */
/**
 * @file maze.cpp
 * Implementation of a SquareMaze class
 */
#include "maze.h"
 
#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
#include "dsets.h"
#include <utility>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;
using namespace cs225;

SquareMaze::SquareMaze()
{
    _width = 0;
    _height = 0;
}

void SquareMaze::makeMaze(int width, int height)
{
    /**
     * @todo Implement this function!
     */
    _width = width;
    _height = height;

    // Constructs a maze with all the walls in place
    dsets.addelements(width * height);
    for (int i = 0; i < width * height; i++) {
        // first => right wall, second => bottom wall
        // true signifies there is a wall
        walls.push_back(pair<bool, bool> (true, true));
    }
    while (unsigned(dsets.size(0)) != walls.size()) {
        // 1D Vector conversion to Matrix
        // https://stackoverflow.com/questions/14015556/how-to-map-the-indexes-of-a-matrix-to-a-1-dimensional-array-c

        /* If two numbers are in different sets for the random wall, *
            use setunion on both to merge the sets and remove the wall */

        /* Chooses random column index */
        int columnIndex = rand() % _width;
        /* Chooses random row index */
        int rowIndex = rand() % _height;
        /* Avoid perimeter on the right when checking walls columnIndex < _width - 1 */
        if (walls[rowIndex * _width + columnIndex].first && columnIndex < _width-1) 
        {
            /* If points between right wall are not in the same set
                union both points */
            if (dsets.find(rowIndex * _width + columnIndex) != 
                dsets.find(rowIndex * _width + columnIndex + 1)) 
                {   
                    int root1 = dsets.find(rowIndex * _width + columnIndex);
                    int root2 = dsets.find(rowIndex * _width + columnIndex + 1);
                    /* Deletes or sets false that there is a wall on the right */
                    walls[rowIndex * _width + columnIndex].first = false;
                    dsets.setunion(root1, root2);
                }
        }
        else if (walls[rowIndex * _width + columnIndex].second && rowIndex < _height-1)
        {
            /* If points between bottom wall are not in the same set
                union both points */
            if (dsets.find(rowIndex * _width + columnIndex) !=
                dsets.find((rowIndex + 1) * _width + columnIndex))
                {
                    int root1 = dsets.find(rowIndex * _width + columnIndex);
                    int root2 = dsets.find((rowIndex + 1) * _width + columnIndex);
                    /* Removes wall by setting to false that there is a wall on the bottom */
                    walls[rowIndex * _width + columnIndex].second = false;
                    dsets.setunion(root1, root2);
                }
        }
    }
}

bool SquareMaze::canTravel (int x, int y, int dir) const
{
    /**
     * @todo Implement this function!
     */
    if (dir == 0) {
        return !walls[x + y * _width].first;
    }
    if (dir == 1) {
        return !walls[x + y * _width].second;
    }
    if (dir == 2) {
        return !walls[x + y * _width - 1].first;
    }
    if (dir == 3) {
        return !walls[x + (y - 1) * _width].second;
    }
    return false;
}

void SquareMaze::setWall(int x, int y, int dir, bool exists)
{
    /**
     * @todo Implement this function!
     */
    if (dir == 0) {
        walls[x + y * _width].first = exists;
    }
    if (dir == 1) {
        walls[x + y * _width].second = exists;
    }
}

vector<int> SquareMaze::solveMaze()
{
    /**
     * @todo Implement this function!
     */
    vector<int> directions;
    /* Queue for BFS traversal */
    queue<int> queue;

    // Think on how I can recover the longest path?

    return directions;
}

PNG * SquareMaze::drawMaze() const
{
    /**
     * @todo Implement this function!
     */
    PNG* png = new PNG(_width*10 + 1, _height*10 + 1);

    // "Blacken" the entire top most row and left most column, except the entrance (1, 0) through (9, 0)
    // For each square in the maze
    return png;
}

PNG * SquareMaze::drawMazeWithSolution()
{
    /**
     * @todo Implement this function!
     */
    PNG* png = drawMaze();
    return png;
}


