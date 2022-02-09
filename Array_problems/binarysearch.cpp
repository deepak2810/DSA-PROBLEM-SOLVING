#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
  int s = 0;
  int e = n;

  while(s<=e ){

    int mid = (s+e)/2;

    if(arr[mid]==key){
      return mid;
    }
    else if(arr[mid]>key){
      e = mid - 1;
    }

    else{
      s = mid+1;
    }

  }

  return -1;
}

int main(){

  int n,key;
  std::cout << "Please input the size of the array: " << '\n';
  std::cin >> n;

  int arr[n];

  std::cout << "Input the elemnets of the array: " << '\n';
  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }

  std::cout << "Enter the elemnet you want to search : " << '\n';
  std::cin >> key;

 std::cout << key <<" is present at : " ;
 std::cout << BinarySearch(arr,n,key)<< '\n';


}
