#include<iostream>
using namespace std;
void insert(int arr[],int n, int x,  int pos){


  int index = pos - 1;

  for(int i = n-1; i>=index; i--){
    arr[i+1]=arr[i];
  }

  arr[index] = x;


}

int main(){
  int n = 5;
  int x,cap,pos;
  int arr[5] = {10,20,30};

  // print arr before insertion.

  std::cout << "array before insertion of element. " << '\n';
  for(int j = 0; j<n; j++){
    std::cout << arr[j] << " ";
  }

  // capacity of arr.
 cap = 3;

  // element to be inserted.
  x=15;

  // position at which element is to be inserted.
  pos = 2;

  // insert x at pos

  insert(arr,n,x,pos);
  std::cout << "array after insertion of element. " << '\n';

  for(int i = 0; i<n; i++){
    std::cout << arr[i] <<" ";
  }
}
