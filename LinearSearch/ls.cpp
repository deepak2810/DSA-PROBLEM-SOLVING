#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int key){

  for(int i = 0; i<n; i++){
    if(arr[i]==key){
      return i;
    }
  }
  return -1;

}

int main(){
  int n,key;
  //size of the array.
  std::cin >> n;

  int arr[n];


// array elements
  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }

  std::cout << "Enter the target element: " << '\n';
  std::cin >> key;

  std::cout << linearSearch(arr,n,key);

  return 0;

}
