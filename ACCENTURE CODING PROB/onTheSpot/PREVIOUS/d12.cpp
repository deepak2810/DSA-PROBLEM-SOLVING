#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1,s2;

    getline(cin,s1);
    getline(cin,s2);

    int a = s1.size();
    int b = s2.size();

    string c  = s1+s2;


    cout<< a <<" " << b <<endl;
    cout<<c<<endl;

    char c0 = s1[0];
    char c1 = s2[0];

    char temp = c0;
    s1[0] = c1;
    s2[0] = temp;

    cout<<s1<<" "<< s2<<endl;
    return 0;
}
