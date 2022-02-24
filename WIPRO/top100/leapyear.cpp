#include<iostream>
using namespace std;
int main(){

  int year;
  std::cin >> year;

  if(year%400==0){
    std::cout<<year<<" " << "is a leap year " << '\n';
  }
  else if( year%4==0 && year%100 != 0){
    std::cout << "year is a leap year." << '\n';
  }

  else
  std::cout << "Year is not a leap year." << '\n';


}
