///////////////////////////////////////////////////////
// Name: Steven Rodriguez
// Date: 3rd November, 2025
// Assignment: Lab #7 - Structs
///////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Date
{
    int month;
    int day;
    int year;
};

struct Friend
{
    string firstName;
    string nickname;
    Date birthdate;   
};

int main()
{
    Friend friends[20];
    bool used[20] = {false};
    int choice;

    do
    {
        cout << "\nBirthday Reminder Menu\n";
        cout << "1. Add or modify friend\n";
        cout << "2. Print all friends\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int index;
            cout << "Enter friend number (1-20): ";
            cin >> index;

            if (index < 1 || index > 20)
            {
                cout << "Invalid friend number.\n";
                continue;
            }

            index--;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter first name: ";
            getline(cin, friends[index].firstName);

            cout << "Enter nickname: ";
            getline(cin, friends[index].nickname);

            cout << "Enter birth month (1-12): ";
            cin >> friends[index].birthdate.month;

            cout << "Enter birth day(1-31): ";
            cin >> friends[index].birthdate.day;

            cout << "Enter birth year(eg. 2005): ";
            cin >> friends[index].birthdate.year;

            used[index] = true;
        }
        
        else if (choice == 2) {
            cout << "\nCurrent friends:\n";
            bool any = false;

            for (int i = 0; i < 20; i++)
            {
                if (used[i]) {
                    any = true;
                    cout << "Friend " << i + 1 << ":\n";
                    cout << "  First name: " << friends[i].firstName << "\n";
                    cout << "  Nickname: " << friends[i].nickname << "\n";
                    cout << "  Birthday: " 
                        << friends[i].birthdate.month << "/"
                        << friends[i].birthdate.day << "/"
                        << friends[i].birthdate.year << "\n";
                }
            }
        }

        else if (choice == 3)
        {
            cout << "Exiting program.\n";
        }
    } while (choice != 3);

    return 0;
}