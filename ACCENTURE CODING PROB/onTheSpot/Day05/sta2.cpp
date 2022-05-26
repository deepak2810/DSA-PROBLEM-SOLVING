#include<iostream>
using namespace std;
int Duplicate(string str){
  int duplicate = 0;
  for(int i = 0; i<str.length(); i++){
      for(int j =i+1; j<str.length(); j++){
        if(str[i]==str[j]){
          duplicate++;
        }
      }
  }

  return duplicate;
}
int main(){
  string str;
  std::cin >> str;

  std::cout << Duplicate(str) << '\n';
}
