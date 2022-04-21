#include<iostream>
using namespace std;
int trailingzero(int n){
  int numberofzero = 0;
  while(n>0){
    numberofzero += n/5;
    n /= 5;
  }

  return numberofzero;
}


int main(){
  int n;
  std::cin >> n;

  std::cout << trailingzero(n) << '\n';
}
