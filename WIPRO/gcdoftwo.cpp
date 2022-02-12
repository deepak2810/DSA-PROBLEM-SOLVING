#include<iostream>
using namespace std;
int main(){

  int n1, n2, gcd;
  std::cin >> n1;
  std::cin >> n2;

  gcd = 1;

  for(int i = 1; i<=n1 || i<=n2; i++){
    if( n1%i == 0 && n2 % i == 0 ){
      gcd = i;
    }
  }

  std::cout << "GCD of the two numbers is :  "<<gcd << '\n';


}
