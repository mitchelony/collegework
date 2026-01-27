// Repeating phrase : Write a program that uses a loop to display the phrase
// “The loop is running” until the user enters a zero.

#include <iostream>  //Includes the iostream library
#include <string>    //Includes the string library
using namespace std; // Assume the use of the standard (std) family
int main()           // the main function
{                    // Start of main
    int input;
    cout << "Enter a number" << endl;
    cin >> input;
    while (input != 0)
    {
        cout << "The loop is running" << endl;

        cout << "Enter a number" << endl;
        cin >> input;
    }
    return 0;
}