#include<iostream>
using namespace std;
int main(){

  // Declaring a int and char array.

  int a[] = { 10, 20, 30 ,40 };
  char b[] = { "abc"};

  // print the base add. of array
  std::cout << a << '\n';

  // print the content of array instead of the add.
  std::cout << b << '\n';

  // Declaring a char pointer that will hold the add. of array b

  char *c = &b[0];


  // print the content of the array instead of add.
  std::cout << c << '\n';



}
