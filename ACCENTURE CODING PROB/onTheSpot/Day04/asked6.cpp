#include<iostream>
using namespace std;
int Recursion(int n){
  if(n==1){
    return 1;
}
    int smallOutput = Recursion(n-1);

    return n*smallOutput;
  
}
int main(){
  int n;
  std::cin >> n;

  int factorial( n);

  std::cout << Recursion(n) << '\n';


}
