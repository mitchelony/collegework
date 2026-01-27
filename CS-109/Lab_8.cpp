///////////////////////////////////////////////////////
// Name: Steven Rodriguez
// Date: 3rd November, 2025
// Assignment: Lab #8 - Functions
///////////////////////////////////////////////////////

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void calculateArea(double length, double width)
{
    double area = length * width;
    cout << "Area of rectangle: " << area << endl;
}

double calculateIncomeTaxes(double amountEarned, double taxRate)
{
    double taxes = amountEarned * taxRate;
    return taxes;
}

int main()
{
	
    cout << "Part A\n";

    cout << "----------------------------\n";
    cout << "Section 1\n";
    cout << "----------------------------\n";

    float num1, exponent1;
	cout << "What is the value: \n";
	cin >> num1;
    cout << "What is its power: \n";
    cin >> exponent1;

    float result1 = pow(num1, exponent1);
    cout << "The Answer is: " << result1 <<endl;
    cout << "----------------------------\n";
    
    cout << "Section 2\n";
    cout << "----------------------------\n";
    float croot = 1.0/3.0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Cube root of " << i+1 << " is: " << pow(i+1, croot) << "\n" << endl;
    }
    cout << "----------------------------\n";

    cout << "Part B\n";

    cout << "----------------------------\n";
    cout << "Section 1\n";
    cout << "----------------------------\n";

    float num2, exponent2;
	cout << "What is the value: \n";
	cin >> num2;
    float result2 = sqrt(num2);
    cout << "Square root is: " << result2 << "\n" << endl;
    cout << "----------------------------\n";
    
    cout << "Section 2\n";
    cout << "----------------------------\n";

    for (int i = 0; i < 10; i++)
    {
        cout << "Square root of " << i+1 << " is: " << sqrt(i+1) << "\n" << endl;
    }
    cout << "----------------------------";


    cout << "\nPart C\n";

    cout << "\n";
    cout << "Section 1\n";
    cout << "----------------------------\n";
    double length, width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    calculateArea(length, width);

    cout << "Section 2\n";
    cout << "----------------------------\n";
    double earned, rate;
    cout << "Enter amount earned: ";
    cin >> earned;
    cout << "Enter tax rate (e.g., 0.2 for 20%): ";
    cin >> rate;
    double taxes = calculateIncomeTaxes(earned, rate);
    cout << fixed << setprecision(2);
    cout << "Taxes owed: " << taxes << endl;
}