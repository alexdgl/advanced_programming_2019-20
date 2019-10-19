#include <iostream>
using namespace std;

int main() 
{
string a;
int i=0;
cout << "Please enter a string: ";

std::getline(std::cin,a);

std::string b;
while(std::getline(std::cin,b)){
if (a==b){
i++;
}
else {
cout << "la molteplicità di " << a <<"è "<<i+1<<" \n";
i=0;
a=b;
}
}


cout << "caccapipipopo" << i <<"\n";


    return 0;
}
