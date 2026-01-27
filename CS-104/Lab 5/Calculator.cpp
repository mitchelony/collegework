///////////////////////////////////////////////////////
// Name: Mitchel Onyebuchi
// Date: 15th October, 2025
// Assignment: Lab #5 - Calculator
///////////////////////////////////////////////////////

#include <iostream>  //Includes the iostream library
using namespace std; // Assume the use of the standard (std) family

/*
Pseudocode:
- init choice, num 1, num2, result
- Welcome Menu display
- Choice == 0, exit program
- Invalid Choice
- User input, num1 & num2
- Divide by 0, add user re-prompting
- switch statement for arithmetic operations
*/

int main()
{
    int choice;
    double num1, num2, result;

    do
    {
        std::cout << "Welcome To Mitchel's Calculator\n";
        std::cout << "0 - Quit\n";
        std::cout << "1 - Add\n";
        std::cout << "2 - Subtract\n";
        std::cout << "3 - Multiply\n";
        std::cout << "4 - Divide\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 0)
        {
            std::cout << "Exiting calculator.\n";
            break;
        }

        if (choice < 0 || choice > 4)
        {
            std::cout << "Invalid selection\n";
            continue;
        }

        std::cout << "Enter first number: ";
        std::cin >> num1;
        std::cout << "Enter second number: ";
        std::cin >> num2;

        if (choice == 4)
        {
            while (num2 == 0)
            {
                std::cout << "Error: Cannot divide by zero.\n";
                std::cout << "Added User Re-Prompting For Fun";
                std::cout << "Please enter a non-zero second number: ";
                std::cin >> num2;
            }
        }

        switch (choice)
        {
        case 1:
            result = num1 + num2;
            std::cout << num1 << " + " << num2 << " = " << result << "\n";
            break;
        case 2:
            result = num1 - num2;
            std::cout << num1 << " - " << num2 << " = " << result << "\n";
            break;
        case 3:
            result = num1 * num2;
            std::cout << num1 << " * " << num2 << " = " << result << "\n";
            break;
        case 4:
            result = num1 / num2;
            std::cout << num1 << " / " << num2 << " = " << result << "\n";
            break;
        }
    } while (true);

    return 0;
}