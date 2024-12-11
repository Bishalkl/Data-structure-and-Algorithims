#include <iostream>
using namespace std;


int main() {
    int a, b,c;
    cout << "Enter a : ";
    cin >> a;

    cout << "Enter b : ";
    cin >> b;


    cout << "1 is for sum, 2 is for sub, 3 is for divide, 4 is for multiply" << endl;

    cout << "Enter a number:  ";
    cin >> c;

    if( c == 1) {
        cout << a + b << endl;
    } else if(c == 2 ) {
        cout << a - b << endl;
    } else if (c == 3) {
        cout << a / b << endl;
    } else if (c == 4) {
        cout << a * b << endl;
    } else {
        cout << "Please enter the correct command " << endl;
    }
    
    
    return 0;
};