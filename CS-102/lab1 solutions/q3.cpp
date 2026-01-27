///////////////////////////////////////////////////////
// Name: Mitchel Onyebuchi
// Date: 26th March, 2025
// Assignment: Lab #1 - Identifiers and Output
// Description: Question 3
///////////////////////////////////////////////////////

#include <iostream>  //Includes the iostream library
#include <string>    //Includes the string library
using namespace std; // Assume the use of the standard (std) family
int main()           // the main function
{                    // Start of main
    // 3) Sales Tax: Write a program that will compute the total sales tax on a purchase of $179.89.
    // Assume the state sales tax is 8% and the county sales tax is 3%.
    double purchaseprice;
    cout << "Enter Purchase Price: ";
    cin >> purchaseprice;
    double statetaxpercent;
    cout << "Enter State Tax %: ";
    cin >> statetaxpercent;
    double countytaxpercent;
    cout << "Enter County Tax %: ";
    double statetaxamount = purchaseprice * statetaxpercent / 100;
    double countytaxamount = purchaseprice * countytaxpercent / 100;
    double totaltax = statetaxamount + countytaxamount;
    cout << "3. Sales Tax" << endl;
    cout << "Purchase Price: $[" << purchaseprice << "]" << endl;
    cout << "State Tax %: [" << statetaxpercent << "]%" << endl;
    cout << "State Tax Amount: $[" << statetaxamount << "]" << endl;
    cout << "County Tax %: [" << countytaxamount << "]%" << endl;
    cout << "County Tax Amount: $[" << countytaxamount << "]" << endl;
    cout << "Total Tax Owed: $[" << totaltax << "]" << endl;
} // End of main