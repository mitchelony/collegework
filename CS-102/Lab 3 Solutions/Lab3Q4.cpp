// Body Mass Index : Write a program that calculates and displays a person’s body mass index(BMI)
// when the user provides their weight and height.
// The BMI is often used to determine whether a person is overweight or underweight for his or her height.
// A person’s BMI is calculated with the following formula:
// BMI = (weight in lbs * 703)/ (height in inches)^2
// Where weight is measured in pounds and height is measured in inches.
// The program should display a message indicating whether the person has optimal weight
// (BMI between 18.5 and 25 inclusive), is underweight (BMI less than 18.5), or is overweight (BMI greater than 25).

#include <iostream> //Includes the iostream library
#include <string>   //Includes the string library
#include <cmath>
using namespace std; // Assume the use of the standard (std) family
int main()           // the main function
{
    double height;
    double weight;

    cout << "Enter The Patient's Height In Inches(in): " << endl;
    cin >> height;
    cout << "Enter The Patient's Weight In Pounds(lbs): " << endl;
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
}