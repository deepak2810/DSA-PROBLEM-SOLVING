#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
  int start = 0;
  int end = n;

  while(start<=end){
    int mid = start+end/2;


    if(arr[mid]==key){
      return mid;
    }

    else if(arr[mid]<key){
      start = mid+1;

    }

    else{
      end = mid - 1;
    }
  }

  return -1;
}



int main(){

  int n, key;
  std::cin >> n;

  int arr[n];

  // Take input array.

  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }

// input element that user want to search.
  std::cout << "Enter target element:  " << '\n';
  std::cin >> key;


  std::cout << BinarySearch(arr,n,key);

  return 0;
}
