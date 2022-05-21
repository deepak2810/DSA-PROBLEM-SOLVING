#include<iostream>
#include<string>
using namespace std;

string helper(string str){
  int arr[26] = {0};

  for(int i = 0; i<str.length(); i++){
    arr[str[i]-'a']+=1;
  }

  string ans = "";

  for(int i = 0; i<26; i++){
    if(arr[i]!=0){

      char ch = i+97;
      ans+=ch;
      ans+=to_string(arr[i]);
    }
  }

  return ans;

}
int main(){

  string str;
  getline(cin,str);

  std::cout << helper(str) << '\n';


}
