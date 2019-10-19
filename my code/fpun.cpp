#include <iostream>
using namespace std;

int main() 

{
int j;
int c=0;
int sc=0;
int n=0;
int* primes;
primes =new int[n];

cout << "Inserisci un numero " <<"\n";
(std::cin >> n);

for (j=2;j<n;j++){
    c=0;

 for (int i=2; i<j; i++){


 if (j%i==0){

c++;
 }
 else {
     c=c;
 
        }
        
}
        

    if (c==0){
            primes[sc]=j;

            sc++;
                }
    else{
continue;
}      
}    
    cout<<"Ecco i numeri primi da 1 a "<<n<<" : "<<endl;    
for (int u=0;u<sc;u++){
    cout<<primes[u]<<" ";
}
delete[] primes;
}
      