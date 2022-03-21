#include<iostream>
using namespace std;
int main(){
  // creating array with dynamic allocation
  int n;
  std::cin >> n;
  // Declaring an array.
  int *p = new int[n];

  for(int i = 0; i<n; i++){
    std::cin >> p[i];
  }

  std::cout << "elements of array are: " << '\n';

  for(int i= 0; i<n; i++){
    std::cout << p[i] <<" ";
  }

  std::cout << "Deepak@codes." << '\n';
}
