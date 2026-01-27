///////////////////////////////////////////////////////
// Name: Mitchel Onyebuchi
// Date: 26th March, 2025
// Assignment: Lab #1 - Identifiers and Output
// Description: Question 2
///////////////////////////////////////////////////////

#include <iostream>  //Includes the iostream library
#include <string>    //Includes the string library
using namespace std; // Assume the use of the standard (std) family
int main()           // the main function
{                    // Start of main
    // 2. Revenue Prediction: The Online Retail division of Amazon generates 73% of total sales for the company. Based on that
    // percentage, write a program that will predict how much revenue the retail division will generate if the Amazon reports $340.5
    // million in revenue for the year.
    double totalrevenue;
    cout << "Enter Total Revenue: ";
    cin >> totalrevenue;
    double percentOftotalRevenue;
    cout << "Enter Online Retail % of Total Revenue: ";
    cin >> percentOftotalRevenue;
    double retailrevenue = totalrevenue * percentOftotalRevenue / 100;
    cout << "2. Revenue Prediction" << endl;
    cout << "Amazon\\’s Total Revenue: $[" << totalrevenue << "]M" << endl;
    cout << "Online Retail % of Total Revenue: [" << percentOftotalRevenue << "]%" << endl;
    cout << "Online Retail\\’s Revenue: $[" << retailrevenue << "]M" << endl;
} // End of main