#include<iostream>
using namespace std;
int fact(int n){
  int result = 1;

  for(int i=1; i<=n; i++){
    result*=i;
  }

  return result;
}
int main(){

  int n;
  std::cin >> n;

  std::cout << fact(n) << '\n';


}
