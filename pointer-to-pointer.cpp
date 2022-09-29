/*
        ------------------------------------------------------------------
                            Miraj Asraf
                            miraj_8280
        ------------------------------------------------------------------
*/

// Pointer to Pointer

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a = 5;
	
	int *p = &a;
	int **q = &p;
	int ***r = &q;
	
	cout << "a = " << a << endl;
	cout << "&a = " << &a << endl;
	cout << "p = " << p << endl;
	cout << "*p = " << *p << endl;
	cout << "*q = " << *q << endl;
	cout << "**q = " << **q << endl;
	cout << "**r = " << **r << endl;
	cout << "***r = " << ***r << endl; 
	
	***r = 20;
	
	cout << "Now, a = " << a << endl;
	
	return 0;
}
