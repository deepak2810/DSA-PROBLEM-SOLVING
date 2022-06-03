#include<iostream>
using namespace std;
int main(){
  int n;
  std::cin >> n;

  int arr[n];

  for(int i=0; i<n; i++){
    std::cin >> arr[i];
  }

  int check;
  std::cin >> check;

  int flag,start,sum = 0;


  for(int i = 0; i<n; i++ ){
   sum+=arr[i];

  while(sum>check){
    sum=sum-arr[start];
    start++;
  }


  if(sum==check){
    std::cout << start<<'\n';
    flag = 1;
    break;
  }
  }


if (flag==0) {
    /* code */
    std::cout << "-1" << '\n';
}
 return 0;

}
