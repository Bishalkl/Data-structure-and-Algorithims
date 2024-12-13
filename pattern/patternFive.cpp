#include <iostream>
using namespace std;

// Print a triangle with incremental numbers.
int main() {
    // taking input from user
    int number;
    cout << "Enter the number: ";
    cin >> number;

    // operation

    // first loop
    for(int row = 1; row <=number; row++) {
        for(int col = 1; col <= row; col++){
            cout << col << " ";
        }
        cout << endl;
    }
}