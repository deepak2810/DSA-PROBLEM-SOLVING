#include<iostream>
using namespace std;

bool Check(string a){
  if(a=="deepak"){
    return true;
  }
  else{
    return false;
  }
}
int main(){
  string str;
  getline(cin,str);
  std::cout << Check(str) << '\n';
}
