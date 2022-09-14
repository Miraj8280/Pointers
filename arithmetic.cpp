/*
        ------------------------------------------------------------------
                            Miraj Asraf
                            miraj_8280
        ------------------------------------------------------------------
*/

// Pointer arithmetic

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a = 5;
	int *p1;
	p1 = &a;
	
// 	cout << "p1 = " << p1 << endl;
// 	cout << "size of int = " << sizeof(int) << endl;
	
	// 1. Increment
// 	cout << "p1 + 1 = " << p1 + 1 << endl;
        // OR 
    // p1++;
    // cout << "after p1++ = " << p1 << endl;
    
    // increment by p1
    // cout << "p1 + 1 = " << p1 + 1 << endl;
   
	
// 	cout << "(*p1 + 1) = " << (*p1 + 1) << endl;
// 	cout << "*(p1 + 1) = " << *(p1 + 1) << endl;
	
	
	
    // 2. Decrement
// cout << "p1 - 1 = " << p1 - 1 << endl;
    // OR 
    // p1--;
    // cout << "after p1-- = " << p1 << endl;
// 	cout << "(*p1 - 1) = " << (*p1 - 1) << endl;
// 	cout << "*(p1 - 1) = " << *(p1 - 1) << endl;
	
	
	
	// 3. Addition
	int x = 5;
	int y = 20;
	int *ptr1 = &x;
	int *ptr2 = &y;
	
// 	cout << "*ptr1 + *ptr2 = " << *ptr1 + *ptr2 << endl;

    // 4. Subtraction
    cout << "ptr1 = " << ptr1 << endl;
    cout << "ptr2 = " << ptr2 << endl;
    
    cout << "*ptr2 - *ptr1 = " << *ptr2 - *ptr1 << endl;
    cout << "ptr2 - ptr1 = " << ptr2 - ptr1 << endl;
	
	return 0;
}
