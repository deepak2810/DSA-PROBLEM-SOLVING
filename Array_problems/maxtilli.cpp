#include<iostream>
using namespace std;
int main(){
  int mx = -199999;
  int n;

  std::cin >> n;

  int a[n];

  for( int i=0; i<n; i++){
    std::cin >> a[i];
  }

  for( int i = 0; i<n; i++){
    mx = max(mx,a[i]);
    std::cout << mx << '\n';
  }
}
