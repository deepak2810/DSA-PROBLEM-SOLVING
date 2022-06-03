// program to segregate array.

#include<iostream>
using namespace std;

void segregateArr(int arr[],int n){
  int l = 0;
  int r = n-1;

  while(l<r){
    if(arr[l]%2==0){
      l++;
    }
    else{
      int temp = arr[l];
      arr[l]=arr[r];
      arr[r]=temp;
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

  segregateArr(arr,n);

  for(int j = 0; j<n; j++){
    std::cout << arr[j] << '\n';
  }

}
