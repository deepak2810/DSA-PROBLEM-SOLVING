#include<iostream>
using namespace std;
int main(){
  int arr[5];
  arr[0]=10;
  arr[1]=20;

   // will print the first element from the array.
   //std::cout << arr[0] << '\n';
  std::cout << *arr << '\n';

  // print the second element from the array.
  //std::cout << arr[1] << '\n';
  std::cout << *(arr+1) << '\n';

}
