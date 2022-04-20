#include<iostream>
using namespace std;
int main(){


// convert string char into uppercase.

string s1;
std::cout << "Enter a word: " << '\n';
std::cin >> s1;

// for loop to access each char in strring.

 for(int i = 0; i<s1.size(); i++){
   if(s1[i]>='a' && s1[i]<='z'){
     s1[i] = s1[i] - 32;
   }
 }


 std::cout << s1 << '\n';

}
