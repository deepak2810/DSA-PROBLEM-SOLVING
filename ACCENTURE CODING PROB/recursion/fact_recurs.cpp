#include<iostream>
using namespace std;
int recurs(int n){
  std::cout << n << '\n';
  if(n==0){
    return 1;
  }

  int smalloutput =  recurs(n-1);
  return n*smalloutput;

}
int main(){

  int n;

  std::cin >> n;

  int ans = recurs(n);
  std::cout << ans << '\n';
}
