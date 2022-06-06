#include<iostream>
using namespace std;
bool SortedArr(int arr[], int n){
  int flag = 0;
  for(int i = 0; i<n-1; i++){
    if(arr[i]<arr[i+1])
      flag = 1;
    else
      flag = 0;
  }
  if(flag){
    return true;
  }
  else
    return false;


}
int main(){
  int n;
  std::cin >> n;

  int arr[n];

  for(int i =0; i<n; i++){
    std::cin >> arr[i];
  }

  if (SortedArr(arr,n)==true) {
    /* code */
    std::cout << "array is sorted." << '\n';
  }
  else{
    std::cout << "array is not sorted." << '\n';
  }
}
