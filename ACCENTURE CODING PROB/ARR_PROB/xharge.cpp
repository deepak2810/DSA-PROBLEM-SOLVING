#include<iostream>
using namespace std;
int ans( int n, int value[], char type[]){
  int sum = 0;

  for( int i = 0; i<n; i++){
    if(type[i]=='P'){
      sum += value[i];
    }

    else{
      sum -= value[i];
    }
  }

  sum = abs(sum);

  return sum*100;
}

int main(){

  int n;
  std::cin >> n;

  int value[n];


  for(int i = 0; i<n; i++){
    std::cin >> value[i];

  }

    char type[n];

    for (int j = 0; j<n; j++){
      std::cin >> type[j];
    }


    std::cout <<ans( n,  value, type)  << '\n';





}
