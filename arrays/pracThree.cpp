#include <iostream>
using namespace std;

// sum and product of all the number in array

// function to sum and product
void sumAndProduct(int arr[], int size) {
    int sum = 0, product = 1;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "The sum is " << sum << " and the product " << product << endl;
}


// main function
int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    sumAndProduct(arr, 8);
    return 0;
}