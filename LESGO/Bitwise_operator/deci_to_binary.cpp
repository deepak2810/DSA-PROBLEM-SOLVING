#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n;
  std::cout << "Enter any base 10 (decimal) number :  " << '\n';
  std::cin >> n;

  int ans = 0;
  int i = 0 ;

  while(n != 0){
    int bit = n&1;

    ans = (bit*pow(10,i)) + ans;
    n = n>>1;
    i++;
  }

  std::cout << "base 2 conversion of number is  : " <<ans << '\n';

}
