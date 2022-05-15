#include<iostream>
using namespace std;
int dicePossibilities(int dice1[],int dice2[],int result,int n){
  int counter = 0;

  for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
      if(dice1[i]+dice2[j]==result){
        counter++;
      }
    }
  }

  return counter;
}
int main(){

  int n =  6;
  int dice1[n]={1,2,3,4,5,6};
  int dice2[n] = { 1,2,3,4,5,6};

  int result;
  std::cout << "input any number" << '\n';
  std::cin >> result;

  std::cout << dicePossibilities(dice1,dice2,result,n) << '\n';

}
