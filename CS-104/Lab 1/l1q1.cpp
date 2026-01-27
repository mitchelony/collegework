///////////////////////////////////////////////////////
// Name: Mitchel Onyebuchi
// Date: 14th October, 2025
// Assignment: Lab 1 - Identifiers & Output
///////////////////////////////////////////////////////
#include <iostream>  //Includes the iostream library
#include <string>    //Includes the string library
using namespace std; // Assume the use of the standard (std) family
int main()           // the main function
{                    // Start of main
    int Base = 6;
    int Height = 8;
    double Area = 0.5 * Base * Height;
    cout << "The triangle’s base: [" << Base << "]" << endl;
    cout << "The triangle’s height: [" << Height << "]" << endl;
    cout << "The triangle’s area: [" << Area << "]" << endl;
    ;
    system("pause"); // Prevents the console from closing on exit.
    return 0;        // Returns whatever is defined by the function return type
} // End of main