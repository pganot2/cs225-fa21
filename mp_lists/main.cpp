#include "List.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {

  List<int> list = List<int>();
  List<int> slist = List<int>();

  for (int i = 1; i <= 10; i+=2) {
    list.insertBack(i);
  }
  /*
  for (int i = 0; i <= 10; i+=2) {
    slist.insertBack(i);
  } */

  //list.mergeWith(slist); // Test for merge

  //test for reversNth
  //list.reverseNth(3);
  list.sort();
  //list.reverse();
  //list.tripleRotate();

  stringstream s1, s2;

  list.print(s1);
  //slist.print(s2);
  std::cout << "List1:" << s1.str() << std::endl;
  //std::cout << s2.str() << std::endl;

  return 0;
}
