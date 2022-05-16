#include<iostream>
using namespace std;
int sumOfPro(int arr1[],int arr2[],int n){

  int sum= 0;

  if(n==0){
    return -1;
  }

  for(int i = 0; i<n; i++){
    sum+=arr1[i]*arr2[n-i-1];
  }

  return sum;
}
int main(){
  int n;
  std::cin >> n;

  int arr1[n];
  for(int i =0; i<n; i++){
    std::cin >> arr1[i];
  }

  int arr2[n];
  for(int i=0; i<n; i++){
    std::cin >> arr2[i];
  }

  std::cout << sumOfPro(arr1,arr2,n) << '\n';


}
