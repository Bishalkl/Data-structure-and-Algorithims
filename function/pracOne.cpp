#include <iostream>
#include <cmath> // For sqrt
using namespace std;

// create the function to check it is prime or not
bool checkPrime(int n) {
    if(n <= 1) {
        return false; // Number <= 1 are not prime
    }
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

// main function
int main() {
    // Taking input from user
    int number;
    cout << "Enter the integer number : ";
    cin >> number;

    if(checkPrime(number)) {
        cout << "It is a prime number. ";
    } else {
        cout << "It is not a prime number.";
    }
    return 0;
}