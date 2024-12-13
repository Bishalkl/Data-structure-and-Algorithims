#include <iostream>
using namespace std;

// Print an inverted triangle
int main() {
    // take input from user
    int num;
    cout<< "Enter the number: ";
    cin >> num;

    // now operation
    // first loop for rows
    for(int rows = num; rows > 0; rows--) {
        // Second loop for col
        for(int col = 0; col < rows; col++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}


































































































































