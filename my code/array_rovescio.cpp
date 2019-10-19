#include <iostream>
using namespace std;
 
template <typename T>
T* farry(T e[n]) {
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

int main () {
int n;


cout << "Inserisci la dimensione del vettore " <<"\n";
(std::cin >> n);
int* h=farry<int>(n);


}