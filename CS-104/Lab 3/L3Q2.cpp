///////////////////////////////////////////////////////
// Name: Mitchel Onyebuchi
// Date: 15th October, 2025
// Assignment: Lab #3 - Selection
///////////////////////////////////////////////////////

#include <iostream>  //Includes the iostream library
#include <string>    //Includes the string library
using namespace std; // Assume the use of the standard (std) family
int main()           // the main function
{                    // Start of main
    int L1, L2, W1, W2;
    cout << "Enter the length of the first rectangle: ";
    cin >> L1;
    cout << "Enter the width of the first rectangle: ";
    cin >> W1;
    cout << "Enter the length of the second rectangle: ";
    cin >> L2;
    cout << "Enter the width of the second rectangle: ";
    cin >> W2;
    double A1 = L1 * W1;
    double A2 = L2 * W2;
    if (A1 == A2)
    {
        cout << "The Areas of the rectangles are equal." << endl;
    }
    else
    {
        int bigger = (A1 > A2) ? A1 : A2;
        if (bigger == A1)
        {
            cout << "The first rectangle is greater" << endl;
        }
        else
        {
            cout << "The second rectangle is greater" << endl;
        }
    }
} // End of main