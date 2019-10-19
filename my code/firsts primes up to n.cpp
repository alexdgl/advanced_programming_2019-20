#include <iostream>
using namespace std;

int main() 

{
int j;
int c=0;
int sc=0;
int n;
int primes[n];

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
        
for (int u=0;u<sc;u++){
    cout<<"I numeri primi da 1 a 100 sono:"primes[u]<<" ";
}

}
      