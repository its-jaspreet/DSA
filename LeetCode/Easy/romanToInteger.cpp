#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        char arrSym[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int arrVal[] = {1, 5, 10, 50, 100, 500, 1000};
        int ans = 0;

        for (int i = 1; i <= s.length(); i++) {
            char prev = s[i-1];
            char next = s[i];
            int prevIndex = 0;
            int nextIndex = 0;

            for (int i = 0; i < 7; i++) {
                if (arrSym[i] == prev) {
                    prevIndex = i;       
                }
                if (arrSym[i] == next) {
                    nextIndex = i;
                }
            }

            if (prevIndex >= nextIndex) {
                ans = ans + arrVal[prevIndex];
            }
            if (prevIndex < nextIndex) {
                ans = ans + (arrVal[nextIndex] - arrVal[prevIndex]);
                i++;
            }

        }
        return ans;
    }
};

int main() {
    Solution mySol;

    string x = "III";
    int case1 = mySol.romanToInt(x);
    cout << case1 << endl;
    
    string y = "LVIII";
    int case2 = mySol.romanToInt(y);
    cout << case2 << endl;

    string z = "MCMXCIV";
    int case3 = mySol.romanToInt(z);
    cout << case3 << endl;

    return 0;
}