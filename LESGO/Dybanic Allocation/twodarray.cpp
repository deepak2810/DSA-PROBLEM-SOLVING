#include<iostream>
using namespace std;
int main(){

  // create an array  of integer pointers.

  int **p = new int *[10];
  for(int i = 0; i<10; i++){
    p[i]= new int[20];
  }
}
