#include<iostream>
using namespace std;
int FindCount(int arr[],int n){
  int count  = 0;
  // first outer loop to pick one element from the array.
  for(int i = 0; i<n; i++){
        int flag = 0;
    //second inner looo to check the occurence of the element.
    for(int j = i+1; j<n; j++){
        if(arr[i]==arr[j]){
          flag = 1;
          break;
        }

    }

    if(flag == 0){
      count++;
    }
    }

  return count;

}













int main(){

  int n;
  std::cin >> n;

  int arr[n];
  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }

  std::cout << FindCount(arr,n);

}
