#include <iostream>  //Includes the iostream library
#include <string>    //Includes the string library
using namespace std; // Assume the use of the standard (std) family
int main()           // the main function
{                    // Start of main
    // 1. Sum of two numbers: Write a program that stores the integers 234
    // and 516 in variables and stores the sum of these two in a
    // variable named result. Display your output in equation form.
    int var1 = 234;
    int var2 = 516;
    int result = var1 + var2;
    cout << "1. Sum of Two Numbers" << endl;
    cout << var1 << " + " << var2 << " = " << result << endl;

    // 2. Revenue Prediction: The Online Retail division of Amazon generates 73% of total sales for the company. Based on that
    // percentage, write a program that will predict how much revenue the retail division will generate if the Amazon reports $340.5
    // million in revenue for the year.
    double totalrevenue = 340.5;
    double percentOftotalRevenue = 73;
    double retailrevenue = totalrevenue * percentOftotalRevenue / 100;
    cout << "2. Revenue Prediction" << endl;
    cout << "Amazon\\’s Total Revenue: $[" << totalrevenue << "]M" << endl;
    cout << "Online Retail % of Total Revenue: [" << percentOftotalRevenue << "]%" << endl;
    cout << "Online Retail\\’s Revenue: $[" << retailrevenue << "]M" << endl;

    // 3) Sales Tax: Write a program that will compute the total sales tax on a purchase of $179.89.
    // Assume the state sales tax is 8% and the county sales tax is 3%.
    double purchaseprice = 179.89;
    double statetaxpercent = 8;
    double countytaxpercent = 3;
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

    // 4. Restaurant Bill: Write a program that computes the tax and tip on a restaurant bill for a patron with a $159.81 meal charge.
    // The tax should %8 of the meal cost. The tip should be 20% ofthe total after adding the tax.
    double mealcost = 159.81;
    double taxpercent = 8;
    double taxamount = mealcost * taxpercent / 100;
    double tippercent = 20;
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

    // 5. Average of Values : Write a program that stores the following values in five different variables,
    // 34, 61.5, 91.8, 73, and 102. It also stores the value 5 in a constant named TOTAL_NUM_VALUES.
    // The program should first calculate the sum of the five variables and store the result in a variable named sum.
    // Then the program should divide the sum variable by the TOTAL_NUM_VALUES constant to get the average.
    // Store the average in a variable named avg.
    double val1 = 34;
    double val2 = 61.5;
    double val3 = 91.8;
    double val4 = 73;
    double val5 = 102;
    const int TOTAL_NUM_VALUES = 5;
    double sum = val1 + val2 + val3 + val4 + val5;
    double avg = sum / TOTAL_NUM_VALUES;
    cout << "5. Average of Values" << endl;
    cout << "The sum of the five numbers is : [" << sum << "]" << endl;
    cout << "The average of the five numbers is : [" << avg << "]" << endl;

    // 6. Annual Pay : Suppose an employee gets paid every two weeks and earns $2580.00 each pay period.
    // In a year the employee gets paid 26 times.
    // Write a program that defines the following
    // variables : payAmount – This variable will hold the amount of pay the employee earns each pay period.
    // payPeriods – This variable will hold the number of pay periods in a year.
    // annualPay – This variable will hold the employee’s total annual pay, which will be calculated.
    // The program should calculate the employee’s total annual pay by multiplying the employee’s pay amount
    // by the number of pay periods in a year and store the result in the annual pay variable.
    double payamount = 2580.00;
    int payperiods = 26;
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
