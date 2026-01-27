///////////////////////////////////////////////////////
// Name: Mitchel Onyebuchi
// Date: 15th October, 2025
// Assignment: Lab #3 - Selection
///////////////////////////////////////////////////////

#include <iostream> //Includes the iostream library
#include <string>   //Includes the string library
#include <cmath>
using namespace std; // Assume the use of the standard (std) family
int main()           // the main function
{                    // Start of main
    double height, weight;

    cout << "Enter Your Height In Inches(in): " << endl;
    cin >> height;
    cout << "Enter Your Weight In Pounds(lbs): " << endl;
    cin >> weight;

    double bmi = (weight * 703) / pow(height, 2);

    cout << "Calaculated BMI: " << bmi << endl;
    if (bmi < 18.5)
    {
        cout << "The Patient is Underweight" << endl;
    }
    else if (bmi > 25)
    {
        cout << "The Patient is Overweight" << endl;
    }
    else
    {
        cout << "The Patient has Optimal Weight" << endl;
    }
    return 0;
} // End of main