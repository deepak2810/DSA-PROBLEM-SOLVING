#include<iostream>
using namespace std;
string Ans(string str, int n ){
  int sum = 0;
  string ans ="";

  for(int i =1; i<str.length(); i+=2){

    sum+= str[i]-'0';

    if(sum>=n) {
      ans+=str[i-1];
      return ans;
    }

    return -1;

  }


}

int main(){

  string str;
  getline(cin,str);

  int n;
  std::cin >> n;

  std::cout << Ans(str,n) << '\n';
}
