#include<iostream>
#include<string>
using namespace std;

// function for output string.
string acc(string str){

  // 1. initialising array with zero at each index.
  int arr[26] = {0};

  //2. Iterate over string.

  for(int i = 0; i<str.length(); i++){
    arr[str[i] - 'a'] += 1;
  }

  string ans = " ";

  for(int i = 0; i<26; i++){
    if(arr[i] != 0){

      char ch = i + 97;
      ans += ch;
      ans += to_string(arr[i]);
    }
  }

   return ans;

}


int main(){
  string st;
  std::cin >> st;

  std::cout << acc( st);
}
