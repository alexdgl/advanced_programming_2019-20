#include <iostream>
using namespace std;
 
template <typename T>
T* farry(T* a, T b, int n) {
    a=new T[n];
    for(int i=0; i<n; i++){
    std::cin >> b ;  
    a[i]=b;
}
cout << " Vettore al rovescio: " <<" ";

for(int i=n-1; i>=0;i--){

         cout << " "<< a[i] << " ";
}
return a;
}

int main () {
int n;
int* a;
int b;


cout << "Inserisci la dimensione del vettore " <<"\n";
(std::cin >> n);
farry<int>(a,b,n);



}