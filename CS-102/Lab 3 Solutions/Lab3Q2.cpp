// Roman Numeral Converter : Write a program that asks the user
// to enter a numberbetween 1 and 10 inclusive
// The program should then display the Roman numeral version of that number.
// Don’t allow the program to accept a number less than 1 or greater than 10

#include <iostream>  //Includes the iostream library
#include <string>    //Includes the string library
using namespace std; // Assume the use of the standard (std) family
int main()           // the main function
{                    // Start of main
    int num;
    string RN;
    cout << "Enter a number from 1 to 10 ";
    cin >> num;

    if (num < 1 || num > 10)
    {
        cout << "Invalid input. Please enter a number from 1 to 10." << endl;
    }
    else
    {
        switch (num)
        {
        case 1:
            RN = "I";
            break;
        case 2:
            RN = "II";
            break;
        case 3:
            RN = "III";
            break;
        case 4:
            RN = "IV";
            break;
        case 5:
            RN = "V";
            break;
        case 6:
            RN = "VI";
            break;
        case 7:
            RN = "VII";
            break;
        case 8:
            RN = "VIII";
            break;
        case 9:
            RN = "IX";
            break;
        case 10:
            RN = "X";
            break;
        }
        cout << "You've Entered: " << num << endl;
        cout << "The Roman Numeral Equivalent is: " << RN << endl;
    }
}