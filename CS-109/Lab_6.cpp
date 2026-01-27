///////////////////////////////////////////////////////
// Name: Steven Rodriguez
// Date: 15th October, 2025
// Assignment: Lab #6 - Array
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main() {
    double arr[10];   // array with exactly 10 slots

    // Step 1: Read in 10 values
    cout << "Enter 10 double values:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Value " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Step 2: Output even index values
    cout << "\nValues at even indexes: ";
    for (int i = 0; i < 10; i += 2) {  // step by 2
        cout << arr[i] << " ";
    }

    // Step 3: Output odd index values
    cout << "\nValues at odd indexes: ";
    for (int i = 1; i < 10; i += 2) {  // start at 1
        cout << arr[i] << " ";
    }

    // Step 4: Set all values to zero
    for (int i = 0; i < 10; i++) {
        arr[i] = 0.0;
    }

    // Step 5: Output the array after resetting to zero
    cout << "\nArray after setting all values to zero: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    // ---------------- PART 2 ----------------
    int nums[5];
    cout << "\n\nEnter 5 integer values:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Integer " << i + 1 << ": ";
        cin >> nums[i];
    }

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += nums[i];
    }
    cout << "\nSum of the numbers: " << sum << endl;

    double average = sum / 5.0;
    cout << "Average of the numbers: " << average << endl;

    int diff = nums[0];
    for (int i = 1; i < 5; i++) {
        diff -= nums[i];
    }
    cout << "Difference of the numbers: " << diff << endl;

    return 0;
}