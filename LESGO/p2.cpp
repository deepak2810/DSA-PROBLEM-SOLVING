#include<iostream>
using namespace std;
int main(){
  int a = 20;

// create a pointer that will store the address of pointer.

 int *p = &a;

 std::cout << *p << '\n';

std::cout << &a << '\n';
  std::cout << p  << '\n';
}
