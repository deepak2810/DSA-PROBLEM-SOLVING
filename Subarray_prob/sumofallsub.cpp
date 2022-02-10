#include<iostream>
using namespace std;
int main(){

  int n;
  std::cin >> n;

  int a[n];
  for(int i = 0; i<n; i++){
    std::cin >> a[i];
  }

  int current = 0;

  for(int  i = 0; i<n; i++){
    current = 0;
    for(int j = i; j<n; j++){
      current+=a[j];
      std::cout <<current << '\n';
    }
  }

  return 0;
}
