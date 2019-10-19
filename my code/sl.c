#include <iostream>
#include <string>
int main() {

int n=10;
std::string r;
std::cout<< "scrivi una stringa non più lunga di " << n <<" caratteri"<< std::endl;
std::string line;
std::getline(std::cin,line);
if(line.length()<=n){
std::cout<<"ok!"<<std::endl;
}
else{
r = line.substr(0, n);
std::cout<< "the new string is " << r << std::endl;
}

}

