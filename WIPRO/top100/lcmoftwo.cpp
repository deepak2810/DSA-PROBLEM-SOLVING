#include<iostream>
using namespace std;

int gcd(int n1, int n2){
  int ans = 1;

  for(int i = 0; i<=n1 || i<=n2; i++){
    if(n1%i==0 && n2%i==0){
      ans = i;
    }
  }

  return ans;
}
int main(){

  int n1,n2,an;
  std::cin >> n1>>n2 ;
  an=gcd(n1,n2);
  std::cout << an << '\n';
}
