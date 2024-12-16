#include <iostream>
using namespace std;

int main() {
    // largest value possible +infinity is INT_MAX

    int nums[] = {26, 4, 67,3, 4, 80, 68, 100};
    int size = sizeof(nums) / sizeof(int);
    int smallest = INT16_MAX;
    int largest = INT16_MIN;
    for(int i = 0; i <= size-1; i++) {
       smallest = min(nums[i], smallest);
       largest = max(nums[i], largest);
    }

    // finding the index of it 
    for(int i = 0; i <=size-1;  i++) {
        if(smallest == nums[i]) {
            cout << i << endl;
        }
        if(largest == nums[i]) {
            cout << i << endl;
        }
    }
    cout << smallest << "," << largest << endl;
    return 0;
}