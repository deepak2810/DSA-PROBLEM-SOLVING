#include<iostream>
using namespace std;
int Answer(int n, int m){
  int divisible = 0;
  int notdivisible = 0;

  for(int i = 1; i<=m; i++){
    if(i%n != 0){
      notdivisible+=i;
    }
    else{
      divisible+=i;
    }
  }

  return abs(notdivisible - divisible);
}
int main(){
  int n;
  std::cin >> n;
  int m;
  std::cin >> m;

  std::cout << Answer(n,m) << '\n';

}
