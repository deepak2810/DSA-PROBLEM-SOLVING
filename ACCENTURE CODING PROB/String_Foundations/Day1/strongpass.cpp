#include<iostream>
using namespace std;
int strongPassword( string s){
  int lc= 0; int uc= 0; int sc = 0; int dg =0; 

  for(int i = 0; i<s.size(); i++){
    if(s[i]>='A' && s[i]<='Z'){
      uc = 1;
    }
    else if(s[i]>='a' && s[i]<='z'){
     lc = 1;
    }
    else if(s[i]>= '0' && s[i]<= '9'){
        dg = 1;
     }

     else{
       sc =1;
     }
  }

  int length = s.size();

  int req = 4-uc-lc-dg-sc;

  if(length+req<6){
    return 6-length;
  }

  else{
    return req;
  }

}
int main(){

  string password;
  getline(cin,password);

  std::cout << strongPassword(password) << '\n';
}
