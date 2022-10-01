/*
        ------------------------------------------------------------------
                            Miraj Asraf
                            miraj_8280
        ------------------------------------------------------------------
*/

// Call by Value and Call by Reference

#include <iostream>
using namespace std;

void fun(int x, int y) {
    x = 20;
    y = 10;
}

void fun2(int *p, int *q) {
    *p = 20;
    *q = 10;
}

void Increment(int a) {
    a = a + 1;
}

void Increment2(int *p) {
    *p = *p + 1;
}

int main() {
	// your code goes here
// 	int x = 10;
// 	int y = 20;
	
	// call by value
	/*
	fun(x, y);
	
	cout << "Call by Value : " << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	
	cout << "---------" << endl;
	*/
	
	// call by reference
	/*
	fun2(&x, &y);
	
	cout << "Call by Reference : " << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	*/
	
	int a = 5;
	
	// call by value 
	Increment(a);
	cout << "a = " << a << endl;
	
	// call by address
	Increment2(&a);
	cout << "a = " << a << endl;
	
	return 0;
}
