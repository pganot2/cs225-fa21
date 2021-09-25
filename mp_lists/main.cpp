#include "List.h"
using namespace std;

int main() {

  List<int> list = List<int>();
  if(list.empty()) {
    std::cout << "true" << std::endl;
  }
  return 0;
}
