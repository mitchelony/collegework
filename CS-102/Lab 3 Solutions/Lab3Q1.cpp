// Minimum / Maximum : Write a program that asks the user to enter two numbers.
// The program should use the conditional operator to determine which number
// is the smaller and which is the larger.
// The program should display to the user which number is larger and which number is
// smaller or if the two numbers are equal.

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
        cout << "The larger number is " << max << endl;
        cout << "The smaller number is " << min << endl;
    }
} // End of main