#include <iostream>
using namespace std;

// Print a rectangle of *.

// main function
int main() {

    int rows, col;
    cout << "Enter the rows: ";
    cin >> rows;
    cout << "Enter the columns: ";
    cin >> col;

    // First loop for row
    for(int i = 0; i < rows; i++) {
        // Second loop for column
        for(int j = 0; j < col; j++){
            cout << "*";
        }
        // making to another line
        cout << endl;
    }
    return 0;
}