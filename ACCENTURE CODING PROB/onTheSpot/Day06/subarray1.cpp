#include<iostream>
using namespace std;
int main(){
  int n;
  std::cin >> n;
  int arr[n];

  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }

  std::cout  << '\n';

  for(int sp = 0; sp<n; sp++){
    for(int ep =sp; ep<n; ep++){
      for(int i = sp; i<=ep; i++){
        std::cout << arr[i] << '\t';
      }
      std::cout  << '\n';
    }
    std::cout  << '\n';
  }

  std::cout  << '\n';
}
