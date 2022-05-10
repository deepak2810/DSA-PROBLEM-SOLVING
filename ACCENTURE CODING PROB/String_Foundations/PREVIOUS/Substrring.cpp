// program for understanding of c++ substring.


#include<iostream>
using namespace std;

int main(){
  string str = "hello_there";

  // use substr(number to start indexing, number of letters you want)

  string str1 = str.substr(5,6);
  std::cout << str1 << '\n';

}
