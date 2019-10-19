#include<iostream>
template <class T> T* hey(T x1 , int x2, T* p1){
  p1=new T[x2];
  for (int i=0; i<x2; ++i){
    std::cout<<"Fill the array\n";
    std::cin>>x1;
    p1[i]=x1; 
  }
  return p1;
  std::cout<<"The pointer to the first element is " << &p1[0] <<"\n";
}
template <class T> void rev(T* x1, int x2){
  for(int i=(x2-1); i>=0; --i){
    std::cout<<"The reverse array is \n";
    std::cout<< x1[i]<<"\n";
  }
} 

int main(){
  int n;
  std::cout<<"How many values?\n";
  std::cin>>n;
  auto c;
  int* p1;
  p1= hey (c, n, p1);
  rev(p1, n);
  delete[] p1;
}