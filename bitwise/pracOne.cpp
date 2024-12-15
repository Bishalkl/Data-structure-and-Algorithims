#include <iostream>
using namespace std;

// createa function to reverse the number 
int reverseNum(int num) {
    int reversed = 0;
    while(num != 0) {
        int lastvalue = num % 10;
        reversed = reversed *  10 +  lastvalue;
        num /= 10;
    }
    return reversed;
}


int main() {
    cout << reverseNum(234) << endl;
    return 0;
}