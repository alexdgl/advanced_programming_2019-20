#include <iostream>
using namespace std;

int main() 

{
int j;
int c=0;
int sc=0;
int* primes;
primes =new int[sc];


for (j=2;j<100;j++){
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
    cout<<primes[u]<<" ";
}

}
      