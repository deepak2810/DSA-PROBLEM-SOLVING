#include<iostream>
using namespace std;
int recFact(int n){
  if(n==0){
    return 1;

  }

    return n*recFact(n-1);


}
int ans(int m, int n){
 return recFact(m)/recFact(n);
}
int main(){
  int m,n;
  std::cin >> m>>n;
  std::cout << ans(m,n) << '\n';
}
