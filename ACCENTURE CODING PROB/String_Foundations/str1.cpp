#include<iostream>
using namespace std;
int main(){
  string str;
  std::cin >> str;

  for(int i = 0; i<str.size(); i++ ){
    std::cout << str[i] << '\n';
  }

}
