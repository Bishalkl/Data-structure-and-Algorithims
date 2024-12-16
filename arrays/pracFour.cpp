#include <iostream>
using namespace std;

// waf to swap the max & min number of an array

// create the function to swap min and max
void swapMinMax(int arr[], int size) {
    int maxNumber = INT16_MIN;
    int minNumber = INT16_MAX;

    // it is for the min and max find
    for(int i = 0; i < size; i++) {
        maxNumber = max(arr[i], maxNumber);
        minNumber = min(arr[i], minNumber);
    }
    // now swaping it 
    int start = 0; int end = size - 1;
    while ( start < end) {
        if( arr[start] == maxNumber || arr[start] == minNumber) {
            end--;
        } else if(arr[end] == maxNumber || arr[end] == minNumber) {
            start++;
        }
        start ++;
        end --;
    }
    swap(arr[start], arr[end]);
}

// main Function
int main() {
    int arr[] = {10, 3, 4, 3, 1, 5, 0};
    int size = 7;
    swapMinMax(arr, size);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }

    return 0;
}