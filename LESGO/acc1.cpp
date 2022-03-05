#include<iostream>
using namespace std;
int main(){

  string str;
  getline(cin,str);

  int n = str.length();
  int m = 0;
  int o = 0;

  for( int i = 0; i<n; i++){

    if(str[i]=='{'){
      m++;
    }

    else if(str[i]=='}'){
      o++;
    }
  }

  if(m==o){
    std::cout << "successfull" << '\n';
  }

  else{
    std::cout << "Failed." << '\n';
  }



  return 0;




}
