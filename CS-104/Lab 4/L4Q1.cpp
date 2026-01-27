///////////////////////////////////////////////////////
// Name: Mitchel Onyebuchi
// Date: 15th October, 2025
// Assignment: Lab #4 - Repetition
///////////////////////////////////////////////////////

#include <iostream>  //Includes the iostream library
#include <string>    //Includes the string library
using namespace std; // Assume the use of the standard (std) family
int main()           // the main function
{                    // Start of main
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }
    cout << "The sum of the numbers from 1 - 100 is : " << sum << endl;
} // End of main