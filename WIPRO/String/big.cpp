#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

  string str;
  getline(cin,str);

  sort(str.begin(),str.end(),greater<int>());

  std::cout << str << '\n';
}
