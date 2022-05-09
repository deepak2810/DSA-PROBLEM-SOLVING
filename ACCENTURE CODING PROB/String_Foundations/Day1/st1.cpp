#include<iostream>
using namespace std;
int factorial(int n ){
  int fact = 1;
  for( int i = 1; i<=n; i++){
     fact *= i;
  }

  return fact;
}

int permut(string s ){
  // declare an array to store occurence of each character.

  int count[26] = {0};
  int len = s.size();

  for(int i = 0; i<len; i++){
    count[s[i]-'a']++; // to count occurence of each character.


  }

 int result = factorial(len);


 for( int i = 0; i<26; i++){
   if(count[i]>1){
     result = result / factorial ( count[i]);
   }
   else{
     return result;

   }
 }

 return result;
}
int main(){

  string s ;
  std::cin >> s;

  std::cout << permut(s) << '\n';
}
