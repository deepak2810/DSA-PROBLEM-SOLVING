#include<iostream>
using namespace std;


int Agbs(int arr[], int target,int n){
int start = 0;
int end = n;
bool isAsc = arr[start]<arr[end];

while ( start<=end) {
/* code */
int mid = start + (end - start)/2;

if(arr[mid] == target){
  return mid;
}

if (isAsc){
  if(target<arr[mid]) {
    end = mid-1;
  }
  else {
    start = mid + 1;
  }
}

else{

if(target>arr[mid]){
  end = mid -1;
}

else {
start = mid+1;
}

}
}



// if target element is not found in the array.
return -1;

}


int main(){

  int n,target;
  std::cin >> n;

  int arr[n];

  for(int i = 0; i<n; i++){
    std::cin >> arr[i];
  }

  std::cout << "Enter the targetelement: " << '\n';
  std::cin >> target;

  std::cout << Agbs(arr,target,n);


}
