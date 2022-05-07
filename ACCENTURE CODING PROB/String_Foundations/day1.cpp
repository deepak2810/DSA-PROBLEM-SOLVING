#include<iostream>
using namespace std;
int ans(string str){
  int n = str.length();

  int perm = 1;

  for(int i = 1; i<=n; i++){
    perm *= i;
  }

  return perm;
}
int main(){
  string str;
  getline(cin,str);

  std::cout << ans(str) << '\n';
}
