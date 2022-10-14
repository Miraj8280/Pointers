/*
        ------------------------------------------------------------------
                            Miraj Asraf
                            miraj_8280
        ------------------------------------------------------------------
*/

// Pointers and 2-D arrays

#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	// two 1-D arrays of three integers
	int A[2][3] = { {2, 3, 6}, {4, 5, 8} };

    /*
	cout << "A = " << A << endl;
	cout << "&A[0] = " << &A[0] << endl;
	cout << "&A[0][0] = " << &A[0][0] << endl;
	cout << "*A = " << *A << endl;
	
	cout << "-----------------" << endl << endl;
	
	cout << "A + 1 = " << A + 1 << endl;
	cout << "A[1] = " << A[1] << endl;
	cout << "&A[1][0] = " << &A[1][0] << endl;
	cout << "*(A + 1) = " << *(A + 1) << endl;
	
	cout << "*(A + 1) + 2 = " << *(A + 1) + 2 << endl;
	cout << "&A[1][2] = " << &A[1][2] << endl;
	
	cout << "*A + 1 = " << *A + 1 << endl;
	cout << "&A[0][1] = " << &A[0][1] << endl;
	*/
	
	/*
	cout << "**A = " << **A << endl;
	cout << "**(A + 1) = " << **(A + 1) << endl;
	
	cout << "*(*A + 1) = " << *(*A + 1) << endl;
	cout << "A[0][1] = " << A[0][1] << endl;
	
	cout << "*(*(A + 1) + 2) = " << *(*(A + 1) + 2) << endl;
	cout << "A[1][2] = " << A[1][2] << endl;
	
	cout << "*(*(A + 1) + 1) = " << *(*(A + 1) + 1) << endl;
	cout << "A[1][1] = " << A[1][1] << endl;
	
	*/
	
	int (*p)[3] = A;
	// pointer to a 1-d array of 3 integers
	
	/*
	cout << "p = " << p << endl;
	cout << "*p = " << *p << endl;
	cout << "*(p + 1) = " << *(p + 1) << endl;
	cout << "**p = " << **p << endl;
	cout << "**(p + 1) = " << **(p + 1) << endl;
	
	cout << "p[0][1] = " << p[0][1] << endl;
	cout << "p[0][2] = " << p[0][2] << endl;
	cout << "p[1][1] = " << p[1][1] << endl;
	cout << "p[1][2] = " << p[1][2] << endl;
	*/
	
	for(int i = 0; i < 2; ++i) {
	    for(int j = 0; j < 3; ++j) {
	        
	        cout << "Address = " << *(A + i) + j << " ";
	        cout << "Values = " << *(*(A + i) + j) << " ; ";
	        // OR *(*(p + i) + j)
	        
	    }
	    
	    cout << endl;
	}
	return 0;
}
