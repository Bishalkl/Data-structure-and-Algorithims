#include <iostream>
using namespace std;

// create the function
void findUnique(int arr[], int size) {
    for(int i = 0; i< size; i++) {
        bool isUnique = true;
        for(int j = 0; j < size; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if(isUnique) {
            cout << arr[i] << " ";
        }
    }
}
// main function
int main () {
    int arr[] = {1,1,2,3,4,5,6,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    findUnique(arr, size);
    cout << endl;
    return 0;
}