// Areas of Rectangles: The area of a rectangle is calculated by multiplying its length times its
// width. Write a program that asks the user for the length and the width of two rectangles. The
// program should display to the user which rectangle has the greater area or if the areas are equal.

#include <iostream> //Includes the iostream library
#include <string>   //Includes the string library
#include <algorithm>
using namespace std; // Assume the use of the standard (std) family
int main()           // the main function
{
    double length1;
    double width1;
    cout << "Enter The Length Of The First Rectangle: " << endl;
    cin >> length1;
    cout << "Enter The Width Of The First Rectangle: " << endl;
    cin >> width1;

    double length2;
    double width2;
    cout << "Enter The Length Of The Second Rectangle: " << endl;
    cin >> length2;
    cout << "Enter The Width Of The Second Rectangle: " << endl;
    cin >> width2;

    double area1 = length1 * width1;
    double area2 = length2 * width2;

    if (area1 == area2)
    {
        cout << "The Areas of the rectangles are equal." << endl;
    }
    else
    {
        if (area1 > area2)
        {
            cout << "The area of the first rectangle is greater." << endl;
        }
        else
        {
            cout << "The area of the second rectangle is greater." << endl;
        }
    }
    return 0;
}