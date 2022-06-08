#include<iostream>
#include<string>

using namespace std;
string helper(string str, int n){
  int sum = 0;
  string ans =" ";

  for(int i =0; i<n; i+=2){
    sum += str[i]-'0';

    if(sum>=n){
      ans+=str[i-1];
      return ans;
    }
  }

  return "ok";
}
int main(){
  string str;
  getline(cin,str);

  int n = str.size();

  std::cout << helper(str,n) << '\n';
}
