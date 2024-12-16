#include <iostream>
using namespace std;

// creating fuction to reverse the array
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {4,5,6,7,8,9,10};
    int size = 7;
    reverseArray(arr, size);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
}

