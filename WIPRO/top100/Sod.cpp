#include<iostream>
using namespace std;
int main(){

  int n;
  std::cin >> n;
  int rem;
  int sum = 0;
  while(n>0){
    rem = n%10;
    sum += rem;
    n= n/10;
  }

  std::cout <<sum << '\n';
}
