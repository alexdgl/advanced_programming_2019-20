#include <iostream>
 
using namespace std;
 
int main () {
 int d=4, *n=&d;
std::cout << "The numberPointer points to the memory address " << n << ".\n";
std::cout << "The numberPointer points to the memory address " << &d << ".\n";

}