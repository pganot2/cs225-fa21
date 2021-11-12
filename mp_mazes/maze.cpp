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
#include <stack>
#include <map>
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
        //Bounds checking
        if (x >= _width - 1) return false;
        return !walls[x + y * _width].first;
    }
    if (dir == 1) {
        if (y >= _height - 1) return false;
        return !walls[x + y * _width].second;
    }
    if (dir == 2) {
        if (x < 1) return false;
        return !walls[x + y * _width - 1].first;
    }
    if (dir == 3) {
        if (y < 1) return false;
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
    /* Vector path to return to reach desired destination */
    vector<int> path;
    /* 2D vector to mark that a location is visited; */
    vector<vector<bool>> visited;
    /* 2D vector for the distance at each point */
    vector<vector<int>> distance;
    /* <first int: current, second int: parent> */
    map<int, int> directions;
    /* Queue for BFS traversal */
    queue<int> traversal;
    // Initializes all points on the visited boolean array as false
    visited = std::vector<std::vector<bool>>(_width, std::vector<bool>(_height, false));
    distance = std::vector<std::vector<int>>(_width, std::vector<int>(_height, 0));

    traversal.push(0);
    visited[0][0] = true;
    distance[0][0] = 0;

    while (!traversal.empty()) {

        int curr_pt = traversal.front();
        
        traversal.pop();

        int x = curr_pt % _width;
        int y = curr_pt / _width;

        if (canTravel(x, y, 0) && visited[x + 1][y] == false) {
            traversal.push((x + 1) + y * _width);
            visited[x + 1][y] = true;
            distance[x + 1][y] = distance[x][y] + 1;

            // Sets previous point or the parent point
            directions[(x + 1) + y * _width] = x + y * _width;
        }

        if (canTravel(x, y, 1) && visited[x][y + 1] == false) {
            traversal.push(x + (y + 1) * _width);
            visited[x][y + 1] = true;
            distance[x][y + 1] = distance[x][y] + 1;
            // Sets previous point or the parent point
            directions[x + (y + 1) * _width] = x + y * _width;
        }

        if (canTravel(x, y, 2) && visited[x - 1][y] == false) {
            traversal.push((x - 1) + y * _width);
            visited[x - 1][y] = true;
            distance[x - 1][y] = distance[x][y] + 1;
            // Sets previous point or the parent point
            directions[(x - 1) + y * _width] = x + y * _width;
        }

        if (canTravel(x, y, 3) && visited[x][y - 1] == false) {
            traversal.push(x + (y - 1) * _width);
            visited[x][y - 1] = true;
            distance[x][y - 1] = distance[x][y] + 1;
            // Sets previous point or the parent point
            directions[x + (y - 1) * _width] = x + y * _width;
        }
    }
    /* Point that is the largest distance from the origin */
    int destination = distance[_width - 1][_height - 1];
    int curr = (_width - 1) + (_height - 1) * _width;

    for (int i = 0; i < _width; i++) {
        if (distance[i][_height - 1] > destination) {
            destination = distance[i][_height - 1];
            curr = i + (_height - 1) * _width;
        }
    }
    stack<int> stack;
    while (curr != 0) {

        int curr_x = curr % _width;
        int curr_y = curr / _height;

        int prev = directions[curr];
        // Check if conventions right, different TAs have said different stuff
        int prev_x = prev % _width;
        int prev_y = prev / _height;

        // If parent is to the left, previous move was a rightward move, so push dir = 0.
        if (prev_x < curr_x) {
            stack.push(0);
        }
        // If parent is to the right, previous move was a left move, so push dir = 2.
        if (prev_x > curr_x) {
            stack.push(2);
        }
        // If parent is on top, previous move was a downward move, so push dir = 1.
        if (prev_y < curr_y) {
            stack.push(1);
        }
        // If parent is on the bottom, previous move was a upward move, so push dir = 3.
        if (prev_y > curr_y) {
            stack.push(3);
        }
        // Update curr so that is is now it's parent or previous point.
        curr = directions[curr];
    }

    while(!stack.empty()) {
        path.push_back(stack.top());
        stack.pop();
    }

    // Get farthest distance coordinate from bottom row
    // stick to map and get parent // previous point
    // Parent of current point, 
    // if difference in y, choose up or down
    // difference in x, choose left or right
    // if x equal, chekc y -coordinates if parent < current
    // if parent y < current y move downward
    // if parent y > current y move upward

    // if parent x < current x move right
    // if parent x > current x move left

    // loop until map[current] == 0;

    // Check which of the 4 directions are available
    // Push directions into queue
    // Pop direction from queue and mark as visited
    // Use a distance variable increment by 1 when moving

    //std::reverse(path.begin(),path.end());

    return path;
}

PNG * SquareMaze::drawMaze() const
{
    /**
     * @todo Implement this function!
     */
    PNG* png = new PNG(_width*10 + 1, _height*10 + 1);

    // "Blacken" the entire top most row and left most column, except the entrance (1, 0) through (9, 0)
    for (unsigned int x = 0; x < png->width(); x++) {
        if (x >= 1 && x <= 9) {
            continue;
        }
        HSLAPixel & pixel = png->getPixel(x, 0);
        pixel.l = 0;
    }
    for (unsigned int y = 0; y < png->height(); y++) {
        HSLAPixel & pixel = png->getPixel(0, y);
        pixel.l = 0;
    }

    for (int x = 0; x < _width; x++) {
        for (int y = 0; y < _height; y++) {
            if (!canTravel(x, y, 0)) {
                for (unsigned int k = 0; k <= 10; k++) {
                    HSLAPixel & pixel = png->getPixel((x + 1) * 10, y * 10 + k);
                    pixel.l = 0;
                }
            }
            if (!canTravel(x, y, 1)) {
                for (unsigned int k = 0; k <= 10; k++) {
                    HSLAPixel & pixel = png->getPixel(x * 10 + k, (y + 1) * 10);
                    pixel.l = 0;
                }
            }
        }
    }

    // For each square in the maze
    return png;
}

PNG * SquareMaze::drawMazeWithSolution()
{
    /**
     * @todo Implement this function!
     */
    PNG* png = drawMaze();

    vector<int> solution = solveMaze();

    int x = 5;
    int y = 5;
    
    for (unsigned i = 0; i < solution.size(); i++) {
        // If travelling rightwards
        if (solution[i] == 0) {
            for (int i = 0; i < 10; i++) {
                HSLAPixel & pixel = png->getPixel(x, y);
                //(Red is 0,1,0.5,1 in HSLA)
                pixel.h = 0;
                pixel.s = 1;
                pixel.l = 0.5;
                pixel.a = 1;
                x++;
            }
        }
        // If travelling downwards
        if (solution[i] == 1) {
            for (int i = 0; i < 10; i++) {
                HSLAPixel & pixel = png->getPixel(x, y);
                pixel.h = 0;
                pixel.s = 1;
                pixel.l = 0.5;
                pixel.a = 1;
                y++;
            }
        }
        // If travelling leftwards
        if (solution[i] == 2) {
            for (int i = 0; i < 10; i++) {
                HSLAPixel & pixel = png->getPixel(x, y);
                pixel.h = 0;
                pixel.s = 1;
                pixel.l = 0.5;
                pixel.a = 1;
                x--;
            }
        }
        // If travelling upwards
        if (solution[i] == 3) {
            for (int i = 0; i < 10; i++) {
                HSLAPixel & pixel = png->getPixel(x, y);
                pixel.h = 0;
                pixel.s = 1;
                pixel.l = 0.5;
                pixel.a = 1;
                y--;
            }
        }
    }

    // Fixes bug where last pixel in red line isn't colored red
    HSLAPixel & k_pixel = png->getPixel(x, y);
    k_pixel.h = 0;
    k_pixel.s = 1;
    k_pixel.l = 0.5;
    k_pixel.a = 1;

    for (unsigned int k = 1; k <= 9; k++) {
        HSLAPixel & pixel = png->getPixel((x - 5) + k, y + 5);
        pixel.h = 0;
        pixel.s = 0;
        pixel.l = 1.0;
    }
    return png;
}
