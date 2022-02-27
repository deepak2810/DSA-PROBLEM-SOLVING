// Binary Search program in c++

#include<iostream>

using namespace std;

int BinarySearch(int arr[], int target, int n){
  int start = 0;
  int end = n;

  // 1.  Find the mid element


while ( start<=end) {
  /* code */
  int mid = start + (end - start)/2;

  if(target>arr[mid]){
    start = mid + 1;
  }

  else if( target < arr[mid]){
    end = mid - 1;
  }

  else{
    return mid;
  }
}
 // if target element is not found in the array.
  return -1;
}
int main()
{

  int n,target;
  std::cin >> n;

  int arr[n];

  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }


std::cout << "Enter the eleemt you want to search in the array : " << '\n';
std::cin >> target;

 std::cout << BinarySearch(arr,target,n) ;




}
