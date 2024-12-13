#include <iostream>
using namespace std;

// Print a right-angled triangle of *.

int main() {
    // Taking input 
    int num;
    cout << "Enter the number: ";
    cin >> num;

    // First loop for rows
    for(int rows = 0; rows < num; rows++){
        // Second loop for columns
        for(int col = 0; col <= rows; col++) {
            cout << "*";
        }
        cout << endl;

    }
 
    return 0;
}