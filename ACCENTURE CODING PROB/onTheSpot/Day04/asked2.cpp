#include<iostream>
using namespace std;
int CountNumbers(int start, int end, int k){
  int counter = 0;

  for(int i =start; i<=end; i++){
    if(i%10==k){
      counter++;
    }

    else if(i==k){
      counter++;
    }

  }

  return counter;
}
int main(){
  int start,end,k;
  std::cin >> start;
  std::cin >> end;
  std::cin >> k;

  std::cout << CountNumbers(start,end,k) << '\n';



}
