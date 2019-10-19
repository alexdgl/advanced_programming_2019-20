#include <iostream>

int main() {
  double d = 9.9;
  auto ref = &d;
  double* ptr = &d;
 
  std::cout << "ref: " << ref << std::endl;
  std::cout << "value of ptr: " << ptr << std::endl << std::endl;


}
