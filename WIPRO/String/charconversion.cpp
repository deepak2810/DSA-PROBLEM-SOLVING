#include<iostream>
#include<string>

using namespace std;
int main(){

  string str;
  getline(cin,str);

  // conversion of string character to uppercase.

  for(int i = 0; i<str.size(); i++){
    if( str[i]>='a' && str[i]<='z'){
      str[i]-=32;
    }
  }

  std::cout << str << '\n';
}
