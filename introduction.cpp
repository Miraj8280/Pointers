/*
        ------------------------------------------------------------------
                            Miraj Asraf
                            miraj_8280
        ------------------------------------------------------------------
*/

// Introduction to pointer


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a = 5;
	int *p = &a;
	cout << "a = " << a << endl;
	cout << "&a = " << &a << endl;
	cout << "p = " << p << endl;
	cout << "*p = " << *p << endl;
	
	int b = 15;
	*p = b;
	cout << "b = " << b << endl;
	cout << "&b = " << &b << endl;
	cout << "p = " << p << endl;
	cout << "*p = " << *p << endl;
	
	int c = 20;
	p = &c;
	*p = c;
	cout << "c = " << c << endl;
	cout << "&c = " << &c << endl;
	cout << "p = " << p << endl;
	cout << "*p = " << *p << endl;
	
	return 0;
}
