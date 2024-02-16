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
        long long reversed = 0;
        
        //! with use case where x = 12345678991, the following error arises:
        //* runtime error: signed integer overflow: 998765432 * 10 cannot be represented in type 'int' 
        //* therefore instead of "int reversed = 0;", we make it "long long reversed = 0;""

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