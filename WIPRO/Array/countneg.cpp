#include<iostream>
using namespace std;
int main(){

  int n ;
  std::cin >> n;

  int arr[n];
  

  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }

  int counter = 0;

  for(int i = 0; i<n; i++){
    if(arr[i]<0){
      counter+=1;
    }
  }

  std::cout <<" Toatal Negative integers are : " <<counter<< '\n';
}
