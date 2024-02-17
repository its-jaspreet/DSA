#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "", smallest = strs[0];
        if (strs.size() == 1) {
            ans = strs[0];
            return ans;
        }
        for (int i = 0; i < strs.size(); i++) {
            if (strs[i].length() < smallest.length()) {
                smallest = strs[i];
            }
        }
        int k = 0, index = smallest.length() - 1;
        while (k <= index) {
            int prev, curr;
            for (int i = 1; i < strs.size(); i++) {
                prev = i-1;
                curr = i;
                if (strs[prev][k] == strs[curr][k]) {
                    continue;
                }
                else {
                    return ans;
                }
            }
            ans += strs[curr][k];
            k++;
        }
        return ans;
    }
};

int main() {
    Solution sol;

    vector<string> case1 = {"flower","flow","flight"};
    string ans1 = sol.longestCommonPrefix(case1);
    cout << ans1 << endl;

    vector<string> case2 = {"dog","racecar","car"};
    string ans2 = sol.longestCommonPrefix(case2);
    cout << ans2 << endl;

    vector<string> case3 = {"a"};
    string ans3 = sol.longestCommonPrefix(case3);
    cout << ans3 << endl;

    return 0;
}