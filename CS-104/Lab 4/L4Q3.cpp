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
    char input;
    cout << "Please select an item. Enter {Q} or {q} to quit" << endl;
    cin >> input;
    while (input != 'Q' && input != 'q')
    {
        cout << "Please select an item. Enter {Q} or {q} to quit" << endl;
        cin >> input;
    }
    return 0;
} // End of main