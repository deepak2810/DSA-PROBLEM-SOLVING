 // a simple program to declare a string.

#include<iostream>

// Header file to use string data type.
#include<string>
using namespace std;

// function to count the number of character in strings.
int Count(string s){
  int size = s.size();
  return size;
}
int main(){

  string s1 ;
  std::cout << "Please enter something : " << '\n';
  std::cin >> s1;

  std::cout << "length of string is : "<<Count(s1) << '\n';


}
