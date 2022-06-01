#include<iostream>
using namespace std;
void printArr(int arr[], int n){
  for(int i = 0; i<n; i++){
    std::cout << arr[i] <<" ";
  }
}
void reverse(int arr[], int n){
  int i = 0;
  int j = n-1;

  while(i<j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j]=temp;
    i++;
    j--;
  }
}
int main(){
  int n;
  std::cin >> n;
  int arr[n];

  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }

  reverse(arr,n);
  printArr(arr,n);

}
