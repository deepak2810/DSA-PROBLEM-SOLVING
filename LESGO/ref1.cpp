#include<iostream>
using namespace std;
int main(){
  int a , b;
  a = 20;
  b = a;

  a++;

  // value of b will remain unchanged.
  
  std::cout << "value of b is: " <<b << '\n';

  return 0;
}
