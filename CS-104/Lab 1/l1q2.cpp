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
    int Length = 12;
    int Width = 7;
    double Area = Length * Width;
    cout << "The rectangle’s width: [" << Length << "]" << endl;
    cout << "The rectangle’s length: [" << Width << "]" << endl;
    cout << "The rectangle’s area: [" << Area << "]" << endl;
    ;
    system("pause"); // Prevents the console from closing on exit.
    return 0;        // Returns whatever is defined by the function return type
} // End of main