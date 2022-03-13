#include<iostream>
using namespace std;
int main(){
  int a = 20;

  int *p = &a;

  std::cout << a << '\n';
  std::cout << *p << '\n';

  a++;

  std::cout << "After Increment : " << '\n';
  std::cout << a << '\n';
  std::cout << *p << '\n';


}
