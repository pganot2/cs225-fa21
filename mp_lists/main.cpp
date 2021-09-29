#include "List.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {

  List<int> list = List<int>();

  list.insertBack(1);
  list.insertBack(2);
  list.insertBack(3);
  list.insertBack(4);

  List<int> slist = list.split(0);

  stringstream s1, s2;

  list.print(s1);
  slist.print(s2);
  
  std::cout << s1.str() << std::endl;
  std::cout << s2.str() << std::endl;

  return 0;
}
