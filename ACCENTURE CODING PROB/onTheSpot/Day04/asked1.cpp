#include<iostream>
using namespace std;
int differenceofSum(int m , int n){
  int sum1 = 0;
  int sum2 = 0;

  for(int i = 1; i<=n; i++){
    if(i%m==0){
      sum1+=i;
    }

    else{
      sum2+=i;
    }
  }

  return sum2-sum1;
}
int main(){
  int m,n;
  std::cin >> m >>n;

  std::cout << differenceofSum(m,n) << '\n';




}
