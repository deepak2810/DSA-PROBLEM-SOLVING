#include<iostream>
using namespace std;
bool arrsorted(int arr[], int n){
  for(int i = 1; i<n; i++){
    if(arr[i]<arr[i-1]){
      return false;
    }
    else{
      return true;
    }
  }


}
int main(){

  int n;
  cin >> n;

  int arr[n];

  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }

  std::cout << arrsorted(arr,n) << '\n';




}
