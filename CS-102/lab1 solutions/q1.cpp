///////////////////////////////////////////////////////
// Name: Mitchel Onyebuchi
// Date: 26th March, 2025
// Assignment: Lab #1 - Identifiers and Output
// Description: Question 1
///////////////////////////////////////////////////////

#include <iostream>  //Includes the iostream library
#include <string>    //Includes the string library
using namespace std; // Assume the use of the standard (std) family
int main()           // the main function
{                    // Start of main
    // 1. Sum of two numbers: Write a program that stores the integers 234
    // and 516 in variables and stores the sum of these two in a
    // variable named result. Display your output in equation form.
    int var1;
    cout << "Enter The First Integer: ";
    cin >> var1;
    int var2;
    cout << "Enter The Second Integer: ";
    cin >> var2;
    int result = var1 + var2;
    cout << "1. Sum of Two Numbers" << endl;
    cout << var1 << " + " << var2 << " = " << result << endl;
} // End of main