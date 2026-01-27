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
    int prod = 1;
    for (int i = 1; i <= 10; i++)
    {
        prod *= i;
    }
    cout << " The product of the numbers from 1 - 10 is : " << prod << endl;
} // End of main