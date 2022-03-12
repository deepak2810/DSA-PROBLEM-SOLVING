#include<iostream>
using namespace std;

int CheckPassword(char str[],int n, int min){

  //  Case 1: at least min characters check :
  if(n<min){
    return 0;
  }

  //Case 2 : Starting character must not be a number.

  if(str[0]-'0'>=0 && str[0]-'0'<=9){
    return 0;
  }


// to iterate over string.
  int i  = 0;

  // to count the value of Capital letters. (at least one Capital letter. )
  int cap = 0;

  // to count the value of numeric values in string.(at least one numeric digit)
  int nu = 0;

  while(i<9){

 // to check for empty spaces and +
  if(str[i]==' ' || str[i]=='+') {
    return 0;
   }

 // to Check if string contains a Capital letter or not.
  if(str[i]>=65 && str[i]<=90) {
    cap++;
  }

// To encounter a numeric digit.
  else if(str[i]-'0'>=0 && str[i]-'0'<=9){
    nu++;
  }

  // increment a to tarverse through the whole string.
  i++;
  }
  return cap>0 && nu>0;
}




int main(){

  int min;
  string s;
  getline(cin,s);

  int len = s.size();
  char *c = &s[0];
  std::cin >> min;

  if(CheckPassword){
    std::cout << "Valid" << '\n';
  }
  else{
    std::cout << "Invalid" << '\n';
  }
}
