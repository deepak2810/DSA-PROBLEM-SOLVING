#include<iostream>
using namespace std;
int main(){
  int *p = new int;
  *p = 10;
  std::cout << "This is Dynamic allocation." << '\n';
  std::cout << *p << '\n';
}
