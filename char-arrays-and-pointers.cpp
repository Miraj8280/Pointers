/*
        ------------------------------------------------------------------
                            Miraj Asraf
                            miraj_8280
        ------------------------------------------------------------------
*/

// Character arrays and pointers

#include <iostream>
using namespace std;

void Display(char C[]) {
    int i = 0;
    cout << "---- Display() ----" << endl;
    while(C[i] != '\0') {
        cout << C[i];
        i++;
    }
    cout << endl;
}


void Display2(char *C) {
    cout << "--- Display2() --- " << endl;
    while(*C != '\0') {
        cout << *C;
        C++;
    }
    cout << endl;
}

void Display3(char *C) {
    cout << "--- Display3() ---" << endl;
    
    C[0] = 'A';
    
    while(*C != '\0') {
        cout << *C;
        C++;
    }
    cout << endl;
    
}

int main() {
	// your code goes here
	
	// size of Character array >= no. of elements in string + 1
	char arr[6] = "Miraj";

    // char *arr = "Miraj";
    // string gets stored as compile time constant
    // we can't change it any more.
	
// 	int size = sizeof(arr)/sizeof(arr[0]);
	
// 	cout << arr << endl;
// 	cout << size << endl;

    Display(arr);
    Display2(arr);
    Display3(arr);
	
	return 0;
}
