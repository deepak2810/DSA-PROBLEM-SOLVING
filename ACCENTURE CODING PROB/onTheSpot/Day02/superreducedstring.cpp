#include<iostream>
#include<string>
using namespace std;

string superreduced(string s ){
  for(int i = 0; i<s.length()-1; i++){
    if(s[i]==s[i+1])
    s.erase(i,2);
    i=-1;
  }

  if(s.length()==0){
    return "empty string";
  }

  else{
    return s;
  
}
int main(){
  string s;
  getline(cin,s);

  std::cout << superreduced(s) << '\n';
}
