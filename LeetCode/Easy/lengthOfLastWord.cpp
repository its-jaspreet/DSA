#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        string a = "";
        for (int i = s.length() - 1; i >= 0; i--) {
            if (isspace(s[i])) {
                continue;
            } else {
                while ((!isspace(s[i])) && (s[i] >= 0)) {
                    a += s[i];
                    i--;
                }
                break;
            }
        }
        return a.length();
    }
};

int main() {
    Solution sol;

    string case1 = "Hello World";
    int ans1 = sol.lengthOfLastWord(case1);
    cout << ans1 << endl;

    string case2 = "   fly me   to   the moon  ";
    int ans2 = sol.lengthOfLastWord(case2);
    cout << ans2 << endl;

    string case3 = "luffy is still joyboy";
    int ans3 = sol.lengthOfLastWord(case3);
    cout << ans3 << endl;
}