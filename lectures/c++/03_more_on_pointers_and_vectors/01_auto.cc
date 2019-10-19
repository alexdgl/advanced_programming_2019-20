#include <cmath>
#include <iostream>

#if __cplusplus > 201103L  //per capire se è supportato c++14

template <class T>
auto init(const std::size_t l) {
  return new T[l]{}; //{}means t1 inizializzato a 0(?)
}

#else

template <class T>
T* init(const std::size_t l) {
  return new T[l]{};
}

#endif
//if i use auto, declare the value with= and not {}
template<typename T>
void debug(T);

int main() {

  auto b = true;          // a bool
  auto ch = 'x';          // a char
  auto i = 123;           // an int
  auto d = 1.2;           // a double
  auto z = std::sqrt(d);  // z has the type of whatever sqrt(d) returns
  auto ui = 0u;           // unsigned int
  auto llui = 0llu;       // long long unsigned int

  for (auto i = 0; i < 7; ++i)
    std::cout << i << std::endl;

  auto pb = &b;  // guess what.. How can I know?   compilatore capisce che lè un puntatore, a un boolean
  auto ps = init<double>(11);
  delete[] ps;
  return 0;
}
