#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0) {
            return false;
        }

        int original = x;
        int reversed = 0;

        while (original > 0) {
            int digit = original % 10;
            original = original / 10;
            reversed = reversed * 10 + digit;
        }
        return x == reversed;
    }
};

int main() {
    Solution mySol;
    int x = 121;
    bool case1 = mySol.isPalindrome(x);
    cout << case1 << endl;

    int y = -121;
    bool case2 = mySol.isPalindrome(y);
    cout << case2 << endl;

    int z = 10;
    bool case3 = mySol.isPalindrome(z);
    cout << case3 << endl;

    return 0;
}