#include<iostream>
#include<string>
using namespace std;
string OrderId(string s){
 int n = s.size();
 string s2 = " ";

 for(int i = 0; i<=n/2; i++){
   s2+=to_string(s[i]+s[n-i+1]);

   if(s[i]==s[n-i]){
     s2+=s[i]+0;
   }


 }
 return s2;
}
int main(){
  string s1;
  std::cin >> s1;

  std::cout << OrderId(s1) << '\n';


}
