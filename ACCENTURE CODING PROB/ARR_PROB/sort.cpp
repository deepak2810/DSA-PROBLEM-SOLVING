#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

  int n;
  std::cin >> n;

  int arr[n];

  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }

  sort(arr,arr+n);

  std::cout << "array after sorting: " << '\n';

  for(int j = 0; j<n; j++){
    std::cout << arr[j] <<" ";
  }
}
