#include<iostream>
using namespace std;
int main(){


  int a = 20;

  // creating a reference variable
  int& b = a;

  a++;

  // value of b will change.
  //

  std::cout << "value of b is: " <<b << '\n';

  return 0;
}
