#include<iostream>
using namespace std;

int main(){

  int n ;
  std::cin >> n;

  int maxans = 0;

  while(n>0){
    int rem = n%10;
    maxans = max(maxans,rem);
    n = n/10;

  }

  std::cout << maxans << '\n';
}
