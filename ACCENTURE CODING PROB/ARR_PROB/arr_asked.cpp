#include<bits/stdc++.h>
using namespace std;

int ans(int arr, int n){
  // sor the array in ascemding order

  sort(arr,arr+n);
  int sum = 0;

  for(int i =0; i<n; i++){
  sum = sum + abs(arr[i]- arr[i+1]);
  }

  return sum;
}
int main(){
  int n;
  std::cin >> n;

  int arr[n];

  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }

  std::cout << ans(arr,n) << '\n';
}
