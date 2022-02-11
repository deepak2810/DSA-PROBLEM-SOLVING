#include<iostream>
using namespace std;
int main(){
  int n, target;

  std::cin >> n;

  int a[n];


  for(int i = 0; i<n; i++){
    std::cin >> a[i];
  }

  std::cout << "Please input taget sum: " << '\n';
  std::cin >> target;

  for(int i = 0; i<n; i++){
    if (a[i]+a[i+1]==target) {

      std::cout <<i<<" "<< i+1;
      i++;

    }
}


}
