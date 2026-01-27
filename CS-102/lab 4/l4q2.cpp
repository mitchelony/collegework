// Sum of numbers: Write a program that uses a loop to sum all of the numbers from 1 to 100
// your output in the format below :
// The sum of the numbers from 1 - 100 is : [sum]

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
}