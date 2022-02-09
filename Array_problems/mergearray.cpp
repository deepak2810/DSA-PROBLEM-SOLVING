#include<iostream>
using namespace std;


void MergedArray(int a[], int b[], int res[], int m, int n){

  int x = 0,y=0,z=0;

  while(x<m){
    res[z]=a[x];
    x++;
    z++;
  }

  while(y<n){
    res[z]=b[y];
    y++;
    z++;
  }


}
int main(){

  int m,n;

  std::cout << "Please enter the size of the first array: " << '\n';
  std::cin >> m;

  int arr_a[m];

  std::cout << "Please enter the size of the second array: " << '\n';
  std::cin >> n;

  int arr_b[n];

  std::cout << "Please input the element of the first array: " << '\n';
  for(int i = 0; i<m; i++){
    std::cin >> arr_a[i];
  }

  std::cout << "Please input the element of the second array: " << '\n';
  for(int j = 0; j<n; j++){
    std::cin >> arr_b[j];
  }

  int ans[m+n];

  MergedArray(arr_a, arr_b, ans,  m,  n);

  std::cout << "Merged array is : " ;

  for(int c = 0; c<m+n; c++){
    std::cout << ans[c]  <<" ";
  }





}
