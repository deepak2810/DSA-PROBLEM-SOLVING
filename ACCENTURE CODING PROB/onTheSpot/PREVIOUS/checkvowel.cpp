#include<iostream>
using namespace std;
bool Check(int a, int b){
  return (a % b) == 0;
}

int main(){

  int a, b;
  std::cin >> a >> b;

  std::cout << Check(a,b) << '\n';


}
