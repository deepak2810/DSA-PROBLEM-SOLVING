#include <iostream>
#include<array>
using namespace std;

std::array<int,5> func() //function with return type std::array
{
    std::array<int,5> f_array; //array declared

    for(int i=0;i<5;i++)
    {
        //array initialisation
        f_array[i] = i;
    }

    return f_array; //array returned
}

int main()
{
    std::array<int,5> arr; //array with length 5

    arr=func(); //function call

    cout<<"The Array is : ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"\t";
    }

    return 0;
}
