#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverseGroup(int n, int arr[],int k){

  int i = 0;
  int j = k-1;
  while(i<j){
  swap(arr[i],arr[j]);
  i++;
  j--;
}
}
int main(){
  int n, k;
  std::cin >> n >> k;

  int arr[n];
  for(int i=0; i<n; i++){
    std::cin >> arr[i];
  }

  reverseGroup(n,arr,k);

  for(int i = 0; i<n; i++){
    std::cout << arr[i] << " ";
  }

}
