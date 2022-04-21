#include<iostream>
#include<string>
using namespace std;
int fact(int n){

    int fact = 1;
  for(int i = 1; i<=n; i++){
     fact = fact * i;
  }

  string ans = to_string(fact);
  int count = 0;
  for(int i = 0; i<ans.size(); i++){
    if(ans[i]=='0'){
      count++;
    }
  }

  return count;
}

int main(){
  int n;
  std::cin >> n;

  std::cout << fact(n) << '\n';
}
