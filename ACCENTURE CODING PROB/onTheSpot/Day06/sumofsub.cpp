#include<iostream>
using namespace std;

int main(){
  int n;
  std::cin >> n;
  int arr[n];

  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }

  int s;
  std::cin >> s;

  int flag, start, sum = 0;

  for(int i =0; i<n; i++){
    sum += arr[i];
  }
}
