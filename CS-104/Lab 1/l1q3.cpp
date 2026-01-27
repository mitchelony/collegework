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
    int PI = 3.14159;
    int Radius = 15;
    double Area = PI * (Radius * Radius);
    cout << "PI: [" << PI << "]";
    cout << "The circle’s radius: [" << Radius << "]";
    cout << "The circle’s area: [" << Area << "]";
    ;
    system("pause"); // Prevents the console from closing on exit.
    return 0;        // Returns whatever is defined by the function return type
} // End of main