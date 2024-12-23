#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// It is solution for find maximun sum of sub array

int main() {
    vector<int> vec = {-2, -3, 4, 5};
    int maxSum = INT_MIN;
    int currentSum = 0;
    for(int i = 0; i < vec.size(); i++ ) {
        currentSum += vec[i];
        maxSum = max(currentSum, maxSum);
        if( currentSum < 0) {
            currentSum = 0; // reset
        }
    }
    cout << "The sum of subarray is " << maxSum << endl;
    return 0;
}