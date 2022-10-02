/*
        ------------------------------------------------------------------
                            Miraj Asraf
                            miraj_8280
        ------------------------------------------------------------------
*/

// Arrays as Function arguments

#include <iostream>
using namespace std;

int sumOfElements(int A[], int size) {
    // we can also write int *A
    int sum = 0;
  
    for(int i = 0; i < size; ++i) {
        sum += A[i];
    }
    
    return sum;
}

int main() {
	// your code goes here
	
	int arr[5] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout << sumOfElements(arr, n) << endl;
	// arr => is treated as a pointer which contains the base address of arr[]

	return 0;
}
