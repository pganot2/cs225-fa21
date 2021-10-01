#include "List.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {

  List<int> list = List<int>();

  for (int i = 1; i <= 13; i++) {
    list.insertBack(i);
  }

  list.tripleRotate();

  stringstream s1;

  list.print(s1);
  
  std::cout << s1.str() << std::endl;

  return 0;
}
