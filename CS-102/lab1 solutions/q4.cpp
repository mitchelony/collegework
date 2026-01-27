///////////////////////////////////////////////////////
// Name: Mitchel Onyebuchi
// Date: 26th March, 2025
// Assignment: Lab #1 - Identifiers and Output
// Description: Question 4
///////////////////////////////////////////////////////

#include <iostream>  //Includes the iostream library
#include <string>    //Includes the string library
using namespace std; // Assume the use of the standard (std) family
int main()           // the main function
{                    // Start of main
    // 4. Restaurant Bill: Write a program that computes the tax and tip on a restaurant bill for a patron with a $159.81 meal charge.
    // The tax should %8 of the meal cost. The tip should be 20% ofthe total after adding the tax.
    double mealcost;
    cout << "Enter Meal Cost: ";
    cin >> mealcost;
    double taxpercent;
    cout << "Enter Tax %: ";
    cin >> taxpercent;
    double taxamount = mealcost * taxpercent / 100;
    double tippercent;
    cout << "Enter Tip %: ";
    cin >> tippercent;
    double tipamount = (mealcost + taxamount) * tippercent / 100;
    double totalbill = mealcost + taxamount + tipamount;
    cout << "4. Restaurant Bill" << endl;
    cout << "================================================================" << endl;
    cout << "Meal Receipt" << endl;
    cout << "================================================================" << endl;
    cout << "Meal Cost: $[" << mealcost << "]" << endl;
    cout << "Tax Amount: $[" << taxamount << "]" << endl;
    cout << "Tip Amount: $[" << tipamount << "]" << endl;
    cout << "Total Bill: $[" << totalbill << "]" << endl;
    cout << "================================================================" << endl;
} // End of main