// Countdown : Write a program that uses a loop to count down and display all of the numbers from 50 to 0.

#include <iostream>  //Includes the iostream library
#include <string>    //Includes the string library
using namespace std; // Assume the use of the standard (std) family
int main()           // the main function
{                    // Start of main
    for (int i = 50; i >= 0; --i)
    {
        cout << i << endl;
    }
    return 0;
}