#include <iostream>
using namespace std;

// creating a function to conver the binary to decimal
int convertBinToDecimal(long long number) {
    int power = 0, totalDec = 0;
    while (number > 0) {
        totalDec += (number % 10) * (1 << power);
        number /= 10;
        power++;
    }
    return totalDec;
}

int main() {
    long long  binNumber;
    // Taking the input value 
    cout << "Enter the binary number: ";
    cin >> binNumber;

    cout << "Converted decimal value is " << convertBinToDecimal(binNumber) << endl;
    return 0;
}