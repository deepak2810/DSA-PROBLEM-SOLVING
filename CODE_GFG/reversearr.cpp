#include <iostream>
using namespace std;
void reverseArr(int n, int arr[]){
    int i = 0;
    int j = n-1;

    while(i<j){
        int temp = arr[i];
        arr[i]= arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

}

int main() {
	//code
	int t, n;
	cin >> t;
	while(t != 0){
	    cin >> n;
	    int arr[n];

	    for(int i = 0; i<n; i++){
	        cin >> arr[i];
	    }

	    reverseArr(n,arr);

	    // print array element

	    for(int i = 0; i<n; i++ ){
	        cout << arr[i] <<" ";
	    }
      t--;
	}
	return 0;
}
