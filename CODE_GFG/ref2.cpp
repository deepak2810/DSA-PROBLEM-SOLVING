// call by reference
#include<iostream>
using namespace std;
// functin call by reference.
void swap(int &a, int &b){
  int temp = a;
  a=b;
  b=temp;
}
int main(){
  int x,y;
  std::cin >> x >> y;

  std::cout <<" values before swapping " << '\n';
  std::cout << x << " " << y << '\n';
  swap(x,y);
  std::cout << " value after swapping " << '\n';
  std::cout << x << " " <<y << '\n';


}
