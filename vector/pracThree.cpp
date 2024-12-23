#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;
    // using two pointer approach
    int start = 0;
    int end = vec.size() - 1;
    int sum = 0;

    while (start < end) {
        sum = vec[start] + vec[end];
        if (sum == target) {
            cout << "Pair found: " << vec[start] << " " << vec[end] << endl;
            break;
        }
        
        if (sum < target) {
            start++;  // Move start pointer to the right to increase the sum
        }
        else {
            end--;  // Move end pointer to the left to decrease the sum
        }
    }

    return 0;
}
