#include<iostream>
using namespace std;

int * Ans(char strings[],char Querries[],int n, int m){

  int z=20;
  int counter = 0;
  int arr[z];

  for(int i = 0 ; i<n; i++){
    for(int j = 0 ; i<m; j++){

      if(strings[i]==Querries[j]){
        arr[i]==counter+1;
      }
    }
  }

  return arr;

}
int main()
{

 int n, m;

 std::cout << "enter size of strings array: " << '\n';
 std::cin >> n;
 char string[n];

 std::cout <<"size of Querries array :" << '\n';
 std::cin >> m;
 char Querries[m];

 std::cout << "Input the elements: " << '\n';
 for(int i = 0; i<n; i++){
   std::cin >> string[i];
 }

 std::cout << "Input the queries: " << '\n';
 for(int i = 0; i<m; i++){
   std::cin >> Querries[i];
 }

 std::cout << Ans(string, Querries, n,  m);





}
