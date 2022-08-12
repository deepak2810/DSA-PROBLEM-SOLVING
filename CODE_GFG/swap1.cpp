// program to swap without using another variable.
#include<iostream>
using namespace std;



int main(){
  int a, b;
  std::cin >> a >> b;
  std::cout << " values of x and y prior swapping. "<< a << " "<< b << '\n';
  a= a+b;// 15
  b= a-b;// 5
  a= a-b;// 10

    std::cout << " values of x and y after swapping. "<< a << " "<< b << '\n';
}
