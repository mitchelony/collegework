///////////////////////////////////////////////////////
// Name: Mitchel Onyebuchi
// Date: 26th March, 2025
// Assignment: Lab #1 - Identifiers and Output
// Description: Question 5
///////////////////////////////////////////////////////

#include <iostream>  //Includes the iostream library
#include <string>    //Includes the string library
using namespace std; // Assume the use of the standard (std) family
int main()           // the main function
{                    // Start of main
    // 5. Average of Values : Write a program that stores the following values in five different variables,
    // 34, 61.5, 91.8, 73, and 102. It also stores the value 5 in a constant named TOTAL_NUM_VALUES.
    // The program should first calculate the sum of the five variables and store the result in a variable named sum.
    // Then the program should divide the sum variable by the TOTAL_NUM_VALUES constant to get the average.
    // Store the average in a variable named avg.
    double val1;
    cout << "Enter First Value: ";
    cin >> val1;
    double val2;
    cout << "Enter Second Value: ";
    cin >> val2;
    double val3;
    cout << "Enter Third Value: ";
    cin >> val3;
    double val4;
    cout << "Enter Fourth Value: ";
    cin >> val4;
    double val5;
    cout << "Enter Fifth Value: ";
    cin >> val5;

    const int TOTAL_NUM_VALUES = 5;
    double sum = val1 + val2 + val3 + val4 + val5;
    double avg = sum / TOTAL_NUM_VALUES;
    cout << "5. Average of Values" << endl;
    cout << "The sum of the five numbers is : [" << sum << "]" << endl;
    cout << "The average of the five numbers is : [" << avg << "]" << endl;
} // End of main