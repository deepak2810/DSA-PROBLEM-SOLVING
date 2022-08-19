#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void zerosToend(int n, int arr[])
{
  for(int i =0; i<n; i++){
    if(arr[i]==0){
      for(int j = i+1; j<n; j++){
        swap(arr[i],arr[j]);
      }
    }
  }
}
int main(){
  int n;
  std::cin >> n;

  int arr[n];

  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }

  zerosToend(n,arr);

  for(int i = 0; i<n; i++){
    std::cout << arr[i] <<" ";
  }




}
