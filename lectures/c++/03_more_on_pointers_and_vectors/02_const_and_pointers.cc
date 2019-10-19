#include <iostream>

template <typename T>
void print_sentinel(const T* a, const std::size_t l);

int main() {
  int a{8}, b{7};
  int* pi{&a};

  const int* pc{&a};
  // *pc = 7; 	// error
  a = 15;  // I can obviously change a

  int* const cp{&a}; //this way we can change only the variable with the value pointed by the pointer  ovver, si il valore no l'indirizzo del valore che ha il pointer
  a = b;
  *cp = 33;
  // cp = &b;   // error

  const int* const cpc{&a};//

  // *cpc = 0;  // error
  // cpc = &n;  // error
  a = 99;

  int aa[4]{};
  print_sentinel(aa, 4);

  return 0;
}

template <typename T>
void print_sentinel(const T* a, const std::size_t N) //essendo a dichiarata con *, devo passargli una variabile di tipo pointer, o un array
 {
  const T* const end{a + N};
  for (; a != end; ++a)
    std::cout << *a << std::endl;
}
