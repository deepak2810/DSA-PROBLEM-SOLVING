#include<iostream>
#include<string>
using namespace std;

string trade(){
  std::cout << "Programmed by @deepak_Codes. " << '\n';
}
int main(){
  string s1, s2;
  s1="elite";
  s2="_Cracked";

  s1.append(s2);

 std::cout << "string after append is : " << '\n';
  std::cout <<s1 << '\n';

 std::cout << trade();
}
