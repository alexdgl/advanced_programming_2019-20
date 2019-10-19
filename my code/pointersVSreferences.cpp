#include <iostream>
#include <ctype.h>
using namespace std;
int main() 
{
int a(5);
int* p (&a);
int& r (a);

std::cout << a << "\n"
          << p << "\n"
          << r << "\n"
          << &a << "\n"
          << &p << "\n"
          << &r << "\n"
          << *p << "\n"
          << &(*p) << std::<< endl;