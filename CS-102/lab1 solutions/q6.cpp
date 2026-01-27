///////////////////////////////////////////////////////
// Name: Mitchel Onyebuchi
// Date: 26th March, 2025
// Assignment: Lab #1 - Identifiers and Output
// Description: Question 6
///////////////////////////////////////////////////////

#include <iostream>  //Includes the iostream library
#include <string>    //Includes the string library
using namespace std; // Assume the use of the standard (std) family
int main()           // the main function
{                    // Start of main
    // 6. Annual Pay : Suppose an employee gets paid every two weeks and earns $2580.00 each pay period.
    // In a year the employee gets paid 26 times.
    // Write a program that defines the following
    // variables : payAmount – This variable will hold the amount of pay the employee earns each pay period.
    // payPeriods – This variable will hold the number of pay periods in a year.
    // annualPay – This variable will hold the employee’s total annual pay, which will be calculated.
    // The program should calculate the employee’s total annual pay by multiplying the employee’s pay amount
    // by the number of pay periods in a year and store the result in the annual pay variable.
    double payamount;
    cout << "Enter Pay Amount: ";
    cin >> payamount;
    int payperiods;
    cout << "Enter Number of Pay Periods: ";
    cin >> payperiods;

    double annualpay = payamount * payperiods;
    cout << "6. Annual Pay" << endl;
    cout << "================================================================";
    cout << "Employee\\’s Annual Paystub" << endl;
    cout << "================================================================";
    cout << "Amount Earned per Pay Period : $[" << payamount << "]" << endl;
    cout << "Total Number of Pay Periods : [" << payperiods << "]" << endl;
    cout << "Employee\\’s Annual Pay : $[" << annualpay << "]" << endl;
    cout << "================================================================";
} // End of main