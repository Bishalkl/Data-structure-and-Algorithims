#include <iostream>
using namespace std;

// Print a pyramid of numbers
int main() {
    int num;
    cout << "Enter the number of rows: ";
    cin >> num;

    // Outer loop for rows
    for (int row = 1; row <= num; row++) {
        // Inner loop for spaces
        for (int space = 1; space <= num - row; space++) {
            cout << " ";  // Print spaces for pyramid shape
        }

        // Inner loop for printing ascending numbers
        for (int col = 1; col <= row; col++) {
            cout << col << " ";  // Print numbers from 1 to current row
        }

        // Inner loop for printing descending numbers
        for (int col = row - 1; col >= 1; col--) {
            cout << col << " ";  // Print numbers from current row-1 down to 1
        }

        cout << endl;  // Move to the next row
    }

    return 0;
}
