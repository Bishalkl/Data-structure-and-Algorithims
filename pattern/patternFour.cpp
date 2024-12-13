#include <iostream>
using namespace std;

// Print a Hollow rectangle

// main function
int main() {
    // input from user
    int rowsnum, colsnum;
    cout << "Enter the rows: ";
    cin >> rowsnum;

    cout << "Enter the columns: ";
    cin >> colsnum;

    // first loop for rows
    for (int row = 1; row <= rowsnum; row++) {
        // second loop for col
        for(int col = 1; col <= colsnum; col++) {
            // condition for print boundries only
            if(row == 1 || row == rowsnum || col == 1 || col == colsnum) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}