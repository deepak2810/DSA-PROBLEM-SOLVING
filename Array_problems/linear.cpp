#include<iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key)
{
  for(int i = 0; i<n; i++){
    if(arr[i]==key){
      return i;
    }
  }

  return -1;
}



int main(){
  int n, key;
  std::cout << "Size of the array: " << '\n';
  std::cin >> n;

  int arr[n];

  std::cout << "Please input element of the array : " << '\n';

  for(int i=0; i<n; i++){
    std::cin >> arr[i];
  }

  std::cout << "Enter the element you want to search" << '\n';
  std::cin >> key;

  std::cout << key <<" is present at " ;
  std::cout << LinearSearch(arr,n,key) <<" Index. "<< '\n';
  std::cout << "Programmed by deepak@codes." << '\n';


}
