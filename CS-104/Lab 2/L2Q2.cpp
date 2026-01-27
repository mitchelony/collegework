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
    int Length;
    cout << "Enter The Length: ";
    cin >> Length;
    int Width;
    cout << "Enter The Width: ";
    cin >> Width;
    double Area = Length * Width;
    cout << "The rectangle’s width: [" << Length << "]" << endl;
    cout << "The rectangle’s length: [" << Width << "]" << endl;
    cout << "The rectangle’s area: [" << Area << "]" << endl;
} // End of main