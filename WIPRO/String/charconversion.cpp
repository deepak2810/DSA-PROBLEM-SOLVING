#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    sort(s.begin(), s.end());
    int max_count = 0;
    int count = 1;
    char ans;
    for (int i = 1; i <= n; i++)
    {
        if ((i == n) || (s[i] != s[i - 1]))
        {
            if (max_count < count)
            {
                max_count = count;
                ans = s[i - 1];
            }
            count = 1;
        }
        else
        {
            count++;
        }
    }
    cout <<"Maximum occurring character is "<< ans << endl;
    return 0;
}
