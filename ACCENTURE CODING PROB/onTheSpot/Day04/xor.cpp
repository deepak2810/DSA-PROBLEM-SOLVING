#include<iostream>
using namespace std;
int xorOfArr(int arr[], int n){
  int xor_sum = 0;

  for(int i = 0; i<n; i++){
    xor_sum = xor_sum ^ arr[i];
  }

  return xor_sum;
}
int main(){

  int n;
  std::cin >> n;
  int arr[n];
  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }

std::cout << xorOfArr(arr,n) << '\n';
}
