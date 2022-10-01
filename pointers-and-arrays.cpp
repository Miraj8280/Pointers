/*
        ------------------------------------------------------------------
                            Miraj Asraf
                            miraj_8280
        ------------------------------------------------------------------
*/

// Pointers and Arrays

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int A[5] = {2, 6, 4, 8, 10};
	
	/*
	int *p = &A[0];
	cout << "p = " << p << endl;
	cout << "*p = " << *p << endl;
	
	cout << "p + 1 = " << p + 1 << endl;
	cout << "*(p + 1) = " << *(p + 1) << endl;
	
	
	int *q = A;
	cout << "A = " << A << endl;
	cout << "*A = " << *A << endl;
	
	cout << "A + 1 = " << A + 1 << endl;
	cout << "*(A + 1) = " << *(A + 1) << endl;
	
	q++; // Valid
	cout << "After q++ = " << q << endl;
	cout << "After q++ = " << *q << endl;
	
	
// 	A++; // Invalid
// 	cout << "After A++ = " << A << endl; // Error

    */
	
	
	for(int i = 0; i < 5; ++i) {
	    cout << "Address = " << A + i << endl;
	    cout << "Value = " << *(A + i) << endl;
	}
	
	return 0;
}
