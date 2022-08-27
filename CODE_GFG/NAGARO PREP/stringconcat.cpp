#include<iostream>
#include<string.h>
using namespace std;
bool Balanced(string s){
  int n = s.length();
  int ol=0;
  int os=0;
  int oc=0;
  int sl=0;
  int ss=0;
  int sc=0;

  for(int i =0; i<n; i++){

    if(s[i]=='{'){
      oc++;
    }
    else if(s[i]=='('){
      os++;
    }
    else if(s[i]=='['){
      ol++;
    }
    else if(s[i]=='}'){
      sc++;
    }
    else if(s[i]==')'){
      ss++;
    }
    else if(s[i]==']'){
      sl++;
    }
  }

  if(oc==sc && os==ss && ol==sl){
    return true;
  }
  else {
    return false;
  }




}

int main(){
  string s;
  std::cin >> s;
  std::cout << Balanced(s);
}
