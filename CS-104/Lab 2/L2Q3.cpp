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
    int PI;
    cout << "Enter The PI: ";
    cin >> PI;
    int Radius;
    cout << "Enter The Radius: ";
    cin >> Radius;
    double Area = PI * (Radius * Radius);
    cout << "PI: [" << PI << "]";
    cout << "The circle’s radius: [" << Radius << "]";
    cout << "The circle’s area: [" << Area << "]";
} // End of main