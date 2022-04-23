#include<iostream>
using namespace std;
void segregate(int arr[], int n){
  int s = 0;
  int e = n-1;

  while(s<e){
    if(arr[s]%2==0){
      s++;
    }
    else{
      swap(arr[s],arr[e]);
      e--;
    }
  }
 return;
}
int main(){


  int n;
  std::cin >> n;

  int arr[n];

  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }

 segregate( arr, n);

 for(int i = 0; i<n; i++){
   std::cout << arr[i]<<" " ;
 }



}
