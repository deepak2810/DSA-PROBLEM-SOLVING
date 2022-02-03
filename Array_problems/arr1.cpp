#include<iostream>
using namespace std;
int main(){
  int n;
  std::cout << "Enter the size of the array: " << '\n';
  std::cin >> n;

  int array[n];

  std::cout << "Enter the elements of the array: " << '\n';
  for(int i = 0; i<n; i++){
    std::cin >> array[i];
  }


std::cout << " elements of the array are: " << '\n';
  for(int i = 0; i<n; i++){
    std::cout << array[i] << '\n';
  }

  std::cout << "Programmed by deepak " << '\n';


}
