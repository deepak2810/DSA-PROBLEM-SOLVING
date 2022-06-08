#include<iostream>
using namespace std;
void PrintArr(int arr[], int n){
  for(int a = 0; a<n; a++){
    std::cout << arr[a] << "";
  }
}

void Ansarr(int a[],int n){
  int j = 0;

  for(int i = 0; i<n; i++){
    if(a[i] != 0){
      a[j] = a[i];
      j++;
    }
  }

  for(; j<n; j++){
    a[j]=0;
  }

}



int main(){
  int n;
  std::cin >> n;

  int arr[n];

  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }


  Ansarr(arr,n);
  PrintArr(arr,n);

}
