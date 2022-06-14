#include<iostream>
using namespace std;
int recFac(int n){

  if(n==0){
    return 1;
  }

  return n*recFac(n-1);
}
int main(){
  int n;
  std::cin >> n;

  std::cout << recFac(n) << '\n';
}
