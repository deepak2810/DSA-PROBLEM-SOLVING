#include<iostream>
using namespace std;
// function to calculate trailing zeros in factorial of given number.
int trailingZeros(int n ){
  int count = 0;

  for(int i = 5; n/i>=1; i *= 5){
      count += n/i;
  }

  return count;
}
int main(){

  int n;
  cin>>n;

  std::cout << trailingZeros(n) << '\n';
}
