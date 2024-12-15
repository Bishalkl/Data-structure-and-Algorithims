#include <iostream>
using namespace std;

// Creating a butterfly pattern

int main() {
    // Taking an input from user
    int number;
    cout << "Enter the number: ";
    cin >> number;

    // Now for operation

    // first opeartion for first upper part of butterfly outerloop
    for( int i = 1; i <= number; i++) {
        
        // inner loop for left triangle
        for(int j= 1; j<=i; j++) {
            cout << "*";
        }
        // inner loop for left space
        for(int k = number -  i; k>=1; k--){
            cout << " ";
        } 

        // inner loop for left space
        for(int k = number -  i; k>=1; k--){
            cout << " ";
        } 
        // inner loop for right triangle
        for(int j= 1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Now opeartion for lower part of butterfly pattern
    for(int i = 1; i<=number; i++ ){
        // first inner loop for left triangle
        for(int j = number; j>=i; j--) {
            cout << "*";
        }
        // first inner loop for left space
        for(int k=2; k<=i; k++) {
            cout <<" ";
        }

        for(int k= 2; k<=i; k++) {
            cout <<" ";
        }

        for(int j = number; j>=i; j--) {
            cout << "*";
        }

        cout << endl;
    } 

    return 0;
}