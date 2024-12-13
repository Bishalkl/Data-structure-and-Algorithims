#include <iostream>
using namespace std;

// Print a rectangle of *.

// main function
int main() {

    // First loop for row
    for(int i = 0; i < 4; i++) {
        // Second loop for column
        for(int j = 0; j < 8; j++){
            cout << "*";
        }
        // making to another line
        cout << endl;
    }
    return 0;
}