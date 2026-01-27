///////////////////////////////////////////////////////
// Name: Mitchel Onyebuchi
// Date: 14th October, 2025
// Assignment: Lab #2 - Input
///////////////////////////////////////////////////////

#include <iostream>  //Includes the iostream library
#include <string>    //Includes the string library
using namespace std; // Assume the use of the standard (std) family
int main()           // the main function
{                    // Start of main
    int Base;
    cout << "Enter The Base: ";
    cin >> Base;
    int Height;
    cout << "Enter The Height: ";
    cin >> Height;
    double Area = 0.5 * Base * Height;
    cout << "The triangle’s base: [" << Base << "]" << endl;
    cout << "The triangle’s height: [" << Height << "]" << endl;
    cout << "The triangle’s area: [" << Area << "]" << endl;
} // End of main