#include<iostream>
using namespace std;
int main(){

// Size of the array.
  int n;
  std::cin >> n;

// Declairing an array.
  int* a = new int[n];

// input elements for array.

  for(int i = 0; i<n; i++){
    std::cin >> a[i];
  }

// if only +ve num
   int max = -1;

   for(int i = 0; i<n; i++){
     if(a[i]>max){
       max = a[i];
     }
   }

   std::cout << max << '\n';
}
