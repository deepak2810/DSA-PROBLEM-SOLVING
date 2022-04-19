#include<iostream>
using namespace std;
int main(){
  string str,str1;
  std::cin >> str;
  std::cin >> str1;

  if(str==str1){
    std::cout << " strings are Equal" << '\n';
  }
  else{
    std::cout << "Not equal" << '\n';
  }

  std::cout << str[0] << '\n';
}
