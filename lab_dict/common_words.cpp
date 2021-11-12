/**
 * @file common_words.cpp
 * Implementation of the CommonWords class.
 *
 * @author Zach Widder
 * @date Fall 2014
 */

#include "common_words.h"

#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

using std::string;
using std::vector;
using std::ifstream;
using std::cout;
using std::endl;
using std::feof;

string remove_punct(const string& str)
{
    string ret;
    std::remove_copy_if(str.begin(), str.end(), std::back_inserter(ret),
                        [](int c) {return std::ispunct(c);});
    return ret;
}

CommonWords::CommonWords(const vector<string>& filenames)
{
    // initialize all member variables
    init_file_word_maps(filenames);
    init_common();
}

void CommonWords::init_file_word_maps(const vector<string>& filenames)
{
    // make the length of file_word_maps the same as the length of filenames
    file_word_maps.resize(filenames.size());

    // go through all files
    for (size_t i = 0; i < filenames.size(); i++) {
        // get the corresponding vector of words that represents the current
        // file
        vector<string> words = file_to_vector(filenames[i]);
        /* Your code goes here! */
        for(auto it = words.begin(); it != words.end(); it++) {
            file_word_maps[i][*it] += 1;
        }
    }
}

void CommonWords::init_common()
{
    /* Your code goes here! */
    for (auto file = file_word_maps.begin(); file != file_word_maps.end(); file++) {
        for (auto word = file->begin(); word != file->end(); word++) {
            auto lookup = common.find(word->first);
            if (lookup != common.end()) {
                // If lookup already exists in map, increment the number of documents
                // It appears in
                common[word->first] += 1;
            } else {
                // Create a new key with the lookup and have value start with 1
                common[word->first] = 1;
            }
        }
    }
}

/**
 * @param n The number of times to word has to appear.
 * @return A vector of strings. The vector contains all words that appear
 * in each file >= n times.
 */
vector<string> CommonWords::get_common_words(unsigned int n) const
{
    vector<string> out;
    /* Your code goes here! */
    for (auto it : common) {
        if (it.second == file_word_maps.size()) {
            int shouldAdd = 1;
            for (unsigned int i = 0; i < file_word_maps.size(); i++) {
                if (file_word_maps[i].at(it.first) < n) {
                    shouldAdd = 0;
                    break;
                }
            }
            if (shouldAdd) out.push_back(it.first);
        }
    }
    return out;
}

/**
 * Takes a filename and transforms it to a vector of all words in that file.
 * @param filename The name of the file that will fill the vector
 */
vector<string> CommonWords::file_to_vector(const string& filename) const
{
    ifstream words(filename);
    vector<string> out;

    if (words.is_open()) {
        std::istream_iterator<string> word_iter(words);
        while (!words.eof()) {
            out.push_back(remove_punct(*word_iter));
            ++word_iter;
        }
    }
    return out;
}
