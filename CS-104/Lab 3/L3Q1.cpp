///////////////////////////////////////////////////////
// Name: Mitchel Onyebuchi
// Date: 15th October, 2025
// Assignment: Lab #3 - Selection
///////////////////////////////////////////////////////

#include <iostream>  //Includes the iostream library
#include <string>    //Includes the string library
using namespace std; // Assume the use of the standard (std) family
int main()           // the main function
{                    // Start of main
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    if (num1 == num2)
    {
        cout << "The two numbers are equal." << endl;
    }
    else
    {
        cout << "The two numbers are not equal." << endl;
        int max = (num1 > num2) ? num1 : num2;
        int min = (num1 < num2) ? num1 : num2;
        cout << "The smaller number is:" << min << endl;
        cout << "The larger number is:" << max << endl;
    }
} // End of main