#include<iostream>
using namespace std;
int main(){


  int n, m;
  std::cin >> n >> m;

  int arr[n][m];

  for(int i = 0; i<n; i++){
    for(int j =0; j<m; j++){
      std::cin >> arr[i][j];
    }
  }

  int find;
  bool flag;

  std::cout << "Enter the element you want to find from the array: " << '\n';
  std::cin >> find;

  for(int i = 0; i<n; i++){
    for(int j = 0; j<m; j++){
      if (find==arr[i][j]) {
        /* code */
        std::cout<<" element is present at : "<<"[" <<i<<"]["<<j <<"]" <<" index" << '\n';
        flag=true;
      }
    }
  }

  if (flag) {
    /* code */
    std::cout << "Elememnt found in the 2d array. " << '\n';
  }
  else{
    std::cout << "Sorry! entered element is not present at the array " <<" please try again"<< '\n';
  }

}
