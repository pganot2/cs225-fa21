/* Your code here! */
/**
 * @file dsets.h
 * Implementation of Disjoint Sets data structure class.
 *
 * @author PJ Ganotisi
 */

#pragma once

#include <vector>
#include <iostream>

using namespace std;

class DisjointSets {
    public:
    /**
     * @param num
     * 
     */
    void addelements(int num);

    /**
     * @param num
     * 
     */
    int find(int elem);

    /**
     * @param a First root to be unioned
     * @param b Second root to be unioned
     * 
     */
    void setunion(int a, int b);

    /**
     * @param elem
     * 
     */
    int size(int elem);

    private:
    /** Vector of ints to hold the disjoint set uptree */
    vector<int> uptree;
};
