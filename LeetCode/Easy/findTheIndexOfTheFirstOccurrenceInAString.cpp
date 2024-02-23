#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length() > haystack.length()){
            return -1;
        }
        int i = 0;
        while (i <= haystack.length() - needle.length()) {
            int j = 0;
            while (j < needle.length() && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == needle.length()) {
                return i;
            }
            i++;
        }
        return -1;
    }
};

int main() {
    Solution mySol;

    int ans1 = mySol.strStr("sadbutsad", "sad");
    cout << ans1 << endl;

    int ans2 = mySol.strStr("leetcode", "leeto");
    cout << ans2 << endl;

    return 0;
}