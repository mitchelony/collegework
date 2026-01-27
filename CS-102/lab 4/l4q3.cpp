// Product of numbers : Write a program that uses a loop to multiply all of the numbers from 1 to 5
// your output in the format below :
// The product of the numbers from 1 - 5 is : [product]

#include <iostream>  //Includes the iostream library
#include <string>    //Includes the string library
using namespace std; // Assume the use of the standard (std) family
int main()           // the main function
{                    // Start of main
    int prod = 1;
    for (int i = 1; i <= 5; i++)
    {
        prod *= i;
    }
    cout << " The product of the numbers from 1 - 5 is : " << prod << endl;
}