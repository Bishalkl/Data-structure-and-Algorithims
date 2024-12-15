#include <iostream>
#include <cmath> // for sqrt
#include <vector> // to store the number
using namespace std;


// function to check number is prime or not 
bool checkPrimeNumber (int n) {
    if( n <= 1 ) return false;

    for(int i = 2; i<=sqrt(n); i++) {
        if( n % i == 0) return false;
    }
    return true;
}


// function to select number up to n
vector<int> selectPrime(int num) {
    vector<int> primeNumber;
    for(int i = 2; i <= num; i++) {
        if(checkPrimeNumber(i)) {
            primeNumber.push_back(i);
        }
    }
    return primeNumber;
}


// main function execute and print it 
int main() {
    // Taking input 
    int number;
    cout << "Enter the number: ";
    cin >> number;
    vector <int> primes = selectPrime(number);
    cout << "Prime number up to " << number << " are ";
    for(int prime: primes) {
        cout << prime << " ";
    }

    return 0;
}