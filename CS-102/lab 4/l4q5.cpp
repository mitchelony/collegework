// Repeating menu : Write a program that uses a loop to display the phrase
// “Please select an item
// Enter{Q} or {q} to quit” until the user enters a “Q” or a “q”.
// Includes the iostream library
#include <iostream>
#include <string>
using namespace std;
int main()
{
    char input;
    do
    {
        cout << "Please select an item. Enter{Q} or {q} to quit" << endl;
        cin >> input;
    } while (input != 'Q' && input != 'q');
    return 0;
}
