#include <iostream>
#include <vector>
using namespace std;

// WAF to print nth Fibonacci

// function to find a fibbonic series
vector<int> fibonacciSeries(int num) {

    if (num <= 0) {
        return {};
    }

    vector<int> fiboCollection = {0,1};
    int i = 0;

    while (i < num - 2) {
        fiboCollection.push_back(fiboCollection[i] + fiboCollection[i+1]);
        i++;
    }
    return fiboCollection;
}

// Main function to execute and output
int main() {
    int number;
    // Taking an input from the user
    cout << "Enter the number: ";
    cin >> number;

    if(number <= 0) {
        cout << "please Enter a number greater than 0." << endl;
        return 1;
    }

    vector<int> fiboOutput = fibonacciSeries(number);

    // loop for print it 
    for(int var : fiboOutput) {
        cout << var << " ";
    }
    cout << endl;

}