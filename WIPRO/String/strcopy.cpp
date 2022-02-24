#include <iostream>
#include <string>
#include <algorithm>

int main()
{

   string s;
  std::cin >> s;

    char cstr[s.size() + 1];

    std::copy(s.begin(), s.end(), cstr);
    cstr[s.size()] = '\0';

    std::cout << cstr << std::endl;

    return 0;
}
