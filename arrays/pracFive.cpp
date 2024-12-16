#include <iostream>
using namespace std;

// waf to find all the unique value in an array

// create function
int findUnique(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j< size; j++) {

        }
    }
    return -1;
}

// main function
int main() {
    int arr[] = {1, 1, 2, 3, 4, 5, 6, 5, 4, 2, 3};
    int size = 11;
    cout << "The unique value is " << findUnique(arr, size) << endl;
    return 0;
}