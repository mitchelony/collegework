#include <iostream> // includes input/output stream utilities
using namespace std; // allows use of std names without prefix

int x; // declares a global integer
int *xptr; // declares a global pointer to int

int main() { // program entry point
    x = 7; // assigns 7 to x
    xptr = &x; // stores address of x in xptr
    cout << &x << endl; // prints address of x
    cout << xptr << endl; // prints value of xptr (address of x)
    cout << *xptr << endl; // prints value pointed to by xptr (x)
    cout << &xptr << endl; // prints address of xptr
    cout << &*xptr << endl; // prints address of x (same as &x)
	return 0; // exits program successfully
} // end of main
