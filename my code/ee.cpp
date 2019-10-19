#include <iostream>
using namespace std;
 
template <typename T>
T* farry(const int n);

int main () {
int n;


cout << "Inserisci la dimensione del vettore " <<"\n";
(std::cin >> n);
int* h=farry<int>(n);


}

template <typename T>
T* farry(const int n) {
    T* e=new T[n];
T g;
    for(int i=0; i<n; i++){
    std::cin >> g ;  
    e[i]=g;
}
cout << " Vettore al rovescio: " <<"\n";

for(int i=n-1; i>=0;i--){

         cout << " "<< e[i] << " ";
}
return e;
}