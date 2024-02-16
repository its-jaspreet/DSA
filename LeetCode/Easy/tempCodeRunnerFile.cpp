#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string x_str = to_string(x);
        for (int i = 0, j = x_str.length() - 1; i <= j; i++, j--) {
            if (x_str[i] != x_str[j]){
                return false;
            }
        }
        return true;
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