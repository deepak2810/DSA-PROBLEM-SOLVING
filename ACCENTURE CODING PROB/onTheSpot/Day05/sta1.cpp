#include<iostream>
using namespace std;
char CharAns(char a, char b){
  char x = int(b-a);

  return b + x;
}
int main(){
  char a,b;
  std::cin >> a;
  std::cin >> b;

  std::cout << CharAns(a,b) << '\n';


}
