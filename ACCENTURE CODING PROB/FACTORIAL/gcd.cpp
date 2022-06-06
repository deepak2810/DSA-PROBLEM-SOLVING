#include<iostream>
using namespace std;
int main(){
  int a,b;
  std::cin >>a>>b;

  int min = (a<b) ? a:b;
  int gcd = 1;

  for(int i = 1; i<=min; i++){
    if(a%i==0 && b%i == 0){
     gcd = i;
    }

  }

  std::cout << gcd << '\n';
}
