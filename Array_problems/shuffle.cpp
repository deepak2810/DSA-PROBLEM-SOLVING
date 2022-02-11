#include<iostream>
using namespace std;
void ansarray(int arr[], int n){

   int ans[n];

   for(int i = 0; i<n; i++){
    ans[i] = arr[i];
    std::cin >> ans[i];
    ans[i+1]=arr[n+1];
    std::cin >> ans[i+1];
   }
   


}
int main()

{


int n;

std::cout << "Please enter the valude of n: " << '\n';
std::cin >> n;

  n = 2*n;

  int arr[n];


  std::cout << "Input the element of the array: " << '\n';

  for(int i =0; i<n; i++){
    std::cin >> arr[i];

}

 ansarray(arr,n);





  for(int i = 0; i<n; i++){
    std::cout << arr[i]<<" ";

}


}
