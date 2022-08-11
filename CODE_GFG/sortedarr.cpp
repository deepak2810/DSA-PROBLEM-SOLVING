#include<iostream>
using namespace std;
bool ifarrissorted(int n, int arr[]){

  if(n==1 || n==0){
    return true;
  }

  for(int i = 0; i<n; i++){
    if(arr[i]<arr[i+1]){
      return true;
    }

    return false;
  }
}
int main(){
  int n;
  std::cin >> n;

  int arr[n];

  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }

  std::cout << ifarrissorted(n,arr) << '\n';
}
