#include <iostream>
#include <string>
#include <vector>

// template<class T, class Allocator = std::allocator<T>>
// class vector;

template <typename T>
void print_vector(const std::vector<T>& v, const std::string& s);

int main() {
  std::vector<int> v0{1, 2, 4}; //un array con 1 2 e 4
  std::vector<int> v1(4, 4); //un array con 4 elemnti=a 4

  print_vector(v0, "v0");
  print_vector(v1, "v1");

  v1 = v0; //con vector si può fare anche se la lunghezza è diversa e adegua automaticamente la dimensione, con gli array no

  print_vector(v1, "v1 after copy");

  for (auto x : {7, 8, 9})
    v1.push_back(x); //l'array sarà dinamicamento ridimensionato, funzione di vettori.

  print_vector(v1, "v1 after push_back");

  for (auto i = 0u; i < v1.size(); ++i)
    std::cout << "v[" << i << "] = " << v1[i] << std::endl;

  std::cout << v1[3] << " " << v1[78] << std::endl;        // no bounds checking
  std::cout << v1.at(3) << " " << v1.at(78) << std::endl;  // bounds checking

  return 0;
}

template <typename T>
void print_vector(const std::vector<T>& v, const std::string& s) {
  std::cout << s << ": ";
  for (const auto& x : v)
    std::cout << x << " ";
  std::cout << std::endl;
}
