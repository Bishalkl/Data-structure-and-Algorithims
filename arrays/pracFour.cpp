#include <iostream>
#include <climits>
using namespace std;

// creating function for swap the max and min
void swapMaxAndMin(int arr[], int size) {
    int largest = INT_MIN;
    int smallest = INT_MAX;

    int smallestIndex = 0;
    int largestIndex = 0;

    for(int i = 0; i < size; i++) {
        if( arr[i] < smallest) {
            smallest = min(arr[i], smallest);
            smallestIndex = i;
        } 
        if( arr[i] > largest) {
            largest = max(arr[i], largest);
            largestIndex = i;
        }
    }
    swap(arr[smallestIndex], arr[largestIndex]);
}


// main function
int main() {
    int arr[] = {12, 3, 14, 20, 15, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    swapMaxAndMin(arr, size);
    for( int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}