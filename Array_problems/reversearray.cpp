#include<iostream>
using namespace std;

void reverse(int arr[], int n){

  int left = 0;
  int right = n-1;

  while(left<right){
    int temp = arr[left];
    arr[left]= arr[right];
    arr[right]= temp;

    left++;
    right--;
  }
}

int main(){

  int n;
  std::cin >> n;

  int arr[n];

  for (int i = 0; i<n; i++){

    std::cin >> arr[i];
  }

  reverse(arr,n);

  for(int j= 0; j<n; j++){
   std::cout << arr[j] <<" ";
  }


}
