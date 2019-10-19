#include <iostream>
using namespace std;

int main() 
{

double i;

int n;

double r;

cout << "Inserisci un numero intero " <<"\n";
while(std::cin >> i){
n=i;
r=i/n;

if (r==1){

cout << "hai inserito un intero: " << i <<"\n";
break;
}
else{

cout << "No, riprova! " <<"\n";

continue;

}
}
    return 0;
}
