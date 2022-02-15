 // a simple program to declare  two dimensional array.


#include<iostream>
using namespace std;
int main(){

// where n = number of rows.
//          m = number of columns

  int n,m;
  std::cout << "Enter the number of rows and columns : " << '\n';
  std::cin >> n >>m;

  int arr[n][m];

  for(int i = 0; i<n; i++){
    for(int j = 0; j<m; j++){
      std::cin >> arr[i][j];
    }
  }

  std::cout << " Two dimensional matrix is : " << '\n';

  for(int i = 0; i<n; i++){
    for(int j =0; j<m; j++){
      std::cout <<arr[i][j] << " ";
    }
    std::cout << '\n';
  }

  std::cout << "Programmed by @deepak khanka - 2d array creationb ." << '\n';




}
