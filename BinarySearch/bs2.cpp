#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n , int target){
  int start = 0;
  int end = n;

  while(start<=end){

    int mid = start + (end - start)/2;

    if(target>arr[mid]){
      start = mid + 1;
    }

    else if(target<arr[mid]){
      end = mid-1;
    }

    else{
      return mid;
    }

}

return -1;
}


int main(){

  int n,target;
  std::cin >> n;

  int a[n];

  for(int i =0; i<n; i++){
    std::cin >> a[i];
  }


  std::cout << "Input the element you want to search : " << '\n';
  std::cin >> target;

  std::cout << BinarySearch(a,n,target) << '\n';


}
