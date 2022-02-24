#include<iostream>
#include<climits>
using namespace std;
int main(){

  int n;
  std::cin >> n;

   int arr[n];

  for(int i = 0; i<n; i++){
    std::cin >> arr[i];

  }
  int maxSUM = INT_MIN
  for(int i = 0; i<n; i++){
    for(int j = i; j<n; j++){
      int sum = 0;
      for(int k = j; k<=j; k++){
        sum+=arr[k];
      }

      maxSUM = max(maxSUM,sum);

    }
  }

  std::cout << maxSUM << '\n';






}
