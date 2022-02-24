#include<iostream>
using namespace std;
int main(){

  int n;
  std::cin >> n;

  int arr[n];

  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }


   for(int i = 0; i<n; i++){
     for(int j = i; j<n; j++){
       for(int k = i; k<=j; k++){
         std::cout << arr[k]<< " ";
       }
       std::cout  << '\n';
     }
   }

   return 0;

}
