#include<iostream>
using namespace std;
int main(){
  string str, ans;
  getline(cin,str);

  for(int i = str.size(); i>=0; i--){
    ans =  ans + str[i];
  }
    std::cout<<"reverse string is : " <<ans <<endl ;

  if(str == ans){
    std::cout << "string is  palindrome" << '\n';
  }

  else{
    std::cout << "String is not palindrome" << '\n';
  }




}
