// program to demnstrate about reference variable in c++
// Without reference varibale values are unable to swap.
#include<iostream>
using namespace std;
void reference(int x, int y){
  int temp = x;
  x=y;
  y=temp;
}
int main(){
  int x,y;
  std::cin >> x;
  std::cin >> y;
  reference(x,y);
  std::cout << x <<" "<<y << '\n';
}
