#include <iostream>
using namespace std;

// waf to print intersection of 2 array

// create function
void findIntersection (int arr1[], int arr2[], int size1, int size2) {
    for( int i = 0;  i < size1; i++) {
        bool interSection = false;
        for(int j = 0; j < size2; j++) {
            if( arr1[i] == arr2[j]) {
                interSection = true;
                break;
            }
        }
        if(interSection) {
            cout << arr1[i] << " ";
        }
    }
}

// main function
int main() {
    // arr1
    int arr1 [] = {1,2,3,4,5,6,8};
    int arr2 [] = {4,11,2,9,15,20,8};

    // size 
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // calling the function
    findIntersection(arr1, arr2, size1, size2);
    cout << endl;

}