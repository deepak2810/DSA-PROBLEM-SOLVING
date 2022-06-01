#include<iostream>
using namespace std;
int dupArr(int arr){
  int n = sizeof(arr);

   // The variable duplicate stores the duplicate element in the array
   int duplicate;

   for (int currentNumber = 1; currentNumber <= n - 1; currentNumber++)
   {
       // The variable count stores the number of currentNumber in the array ARR
       int count = 0;

       // Traverse through the array ARR
       for (int index = 0; index < n; index++)
       {
           // Check if ARR[index] is equal to currentNumber
           if (arr[index] == currentNumber)
           {
               count++;
           }
       }

       // Check if count is more than 1
       if (count > 1)
       {
           duplicate = currentNumber;
       }
   }

   // Return the variable duplicate
   return duplicate;
}


int main(){
  int n;
  std::cin >> n;

  int arr[n];
  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }

  std::cout << dupArr(arr) << '\n';
