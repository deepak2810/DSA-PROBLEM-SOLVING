#include<iostream>
#include<string>
using namespace std;
int main(){
  string str;
  getline(cin,str);

  for(int i = 0; i<str.size(); i++){
    if(str[i]>='A' && str[i]<='z'){
      str[i]+=32;
    
    }
  }

  std::cout << str << '\n';
}
