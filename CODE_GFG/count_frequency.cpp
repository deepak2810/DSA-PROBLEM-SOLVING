#include<iostream>
using namespace std;
int occurence(int arr[], int n, int x){
  int frequency = 0;
  for(int i = 0; i<n; i++){
    if(arr[i]==x){
      frequency++;
    }
  }

  return frequency;
}
int main(){

  int n,x;
  std::cin >> n;

  int arr[n];
  for(int i=0; i<n; i++){
    std::cin >> arr[i];
  }

  std::cout << "Enter the element from array. " << '\n';
  std::cin >> x;

  std::cout << occurence(arr,n,x);


}
