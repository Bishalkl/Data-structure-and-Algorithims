#include <iostream>
#include <vector>
using namespace std;

class Solution {
public: 
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int val : nums) {
            ans ^= val; // we use bitwise operator (xor) opeartor  
        }
        return ans;
    }
};

int main() {
    vector<int> vec = {4,1,2,1,2};

    Solution solution;
    int result = solution.singleNumber(vec);
    cout << "The single number is: " << result << endl;
    return 0;
}