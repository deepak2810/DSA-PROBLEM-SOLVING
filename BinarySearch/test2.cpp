#include<iostream>
#include<array>
using namespace std;
int main()
{  //Given array
   int  arr[] = {10 ,20 ,30};

   int al = sizeof(arr)/sizeof(arr[0]); //length calculation
   cout << "The length of the array is: " <<al;

   return 0;
}
