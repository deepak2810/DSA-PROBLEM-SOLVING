#include<iostream>
using namespace std;
int Lcm(int a, int b){
  int lcm  = 0;
  int max = (a>b) ? a : b;

  while(true){
    if (max % a == 0 && max % b == 0){
      lcm = max;
      break;
    }

     max++;

  }
  return lcm;
}
int main(){

  int a ,b;
  std::cin >> a >> b;

  std::cout << Lcm(a,b) << '\n';
}
