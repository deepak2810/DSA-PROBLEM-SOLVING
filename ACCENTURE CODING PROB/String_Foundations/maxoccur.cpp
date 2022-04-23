#include<iostream>
using namespace std;
int main(){
  string s1;
  getline(cin,s1);

 // declaration of an array to store frequency.
  int frequency[26];

  for(int i = 0; i<26; i++){
    frequency[i]=0;
  }

  for(int i = 0; i<s1.size(); i++){
    frequency[s1[i]-'a']++;
  }

  char ans = 'a';
  int maxf = 0;

  for(int  i = 0; i<26; i++){
    if(frequency[i]> maxf){
      maxf = frequency[i];
      ans = i + 'a';
        }
  }

  std::cout << " maximum time occuring character: "<< ans << " "<< " frequency is : " << maxf<< '\n';
}
