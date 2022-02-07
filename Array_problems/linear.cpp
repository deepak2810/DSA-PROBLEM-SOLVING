// a simple c++ program for linear searching in array
#include<iostream>
using namespace std;
int main(){

  int n;
  std::cin >> n;

  int arr[n];

  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }

  int key;
  std::cout << "Enter the element you want to search : " << '\n';
  std::cin >> key;

  for(int i = 0; i<n; i++){
    if(arr[i])==key){
    std::cout << "element is present at " << i << " index. " << '\n';
  }
  else{
    std::cout << "element is not present in the arrat." << '\n';
  }
}
