#include<iostream>
using namespace std;
void fun1(){
  std::cout << " recursion loading " << '\n';
  // recursion - direct recursion function calling itself.

  fun1();
}
int main(){
  fun1();
  return 0;
}
