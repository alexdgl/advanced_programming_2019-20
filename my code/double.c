#include <iostream>
using namespace std;

int main() 
{

double i;

int n;

double r;

cout << "Inserisci un numero non intero " <<"\n";
while(std::cin >> i){
n=i;
r=i/n;

if (r==1){

cout << "riprova " <<"\n";
continue;


}
else{

cout << "hai inserito un numero non intero: " << i <<"\n";
break;

}
}
    return 0;
}
