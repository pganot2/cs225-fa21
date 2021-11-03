/* Your code here! */
/**
 * @file dsets.cpp
 * Implementation of Disjoint Sets data structure class.
 */
#include "dsets.h"
 
#include <utility>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void DisjointSets::addelements(int num) {
    // Creates num elements with representative number -1 and index is the value
    for (int i = 0; i < num; i++) {
        uptree.push_back(-1);
    }
}

int DisjointSets::find(int elem) {
    if (uptree[elem] < 0) {
        return elem;
    } 
    // Path Compression
    else {
        // return find(uptree[elem]);
        // On Recurse back it compresses path by pointing current elem to root
        int root = find(uptree[elem]);  
        uptree[elem] = root;
        return root;
    }
}

void DisjointSets::setunion(int a, int b) {
    int root1 = find(a);
    int root2 = find(b);
    int newSize = uptree[root1] + uptree[root2];

    // If uptree[a]] is less than (more negative), it is the larger set;
    // we union the smaller set, b, with a. (a is value in the set)
    if (uptree[root1] < uptree[root2]) {
        uptree[root2] = root1;
        uptree[root1] = newSize;
    } 
    // Otherwise, do the opposite:
    else {
        uptree[root1] = root2;
        uptree[root2] = newSize;
    }
}

int DisjointSets::size(int elem) {
    return abs(uptree[find(elem)]);
}


