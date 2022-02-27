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
  int maxSum = INT_MIN;
  for(int i = 0; i<n; i++){
    for(int j = i; j<n; j++){
      int sum = 0;

      for(int k = i; k<=j; k++){
        sum += arr[k];
      }
      maxSum = max(maxSum,sum);
      }
    }

    std::cout << maxSum << '\n';

    return 0;
  }
