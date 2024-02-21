#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        map <char, vector<int>> open;
        map <char, vector<int>> close;
        open['('] = open['{'] = open['['] = {0};
        close[')'] = close['}'] = close[']'] = {0};
        
        int prev, curr, len;
        for (int i = 1; i < s.length(); i++) {
            prev = i - 1;
            curr = i;
            len = s.length();

            if (s[prev] == open.first && s[curr] == close.first) {
                
            }

        }
        
    }
};

int main() {
    Solution sol;

    string case1 = "()";
    bool ans1 = sol.isValid(case1);
    cout << ans1 << endl;

    string case2 = "()[]{}";
    bool ans2 = sol.isValid(case2);
    cout << ans2 << endl;

    string case3 = "(]";
    bool ans3 = sol.isValid(case3);
    cout << ans3 << endl;

    string case4 = "([{()()[()]}])";
    bool ans4 = sol.isValid(case4);
    cout << ans4 << endl;    

    return 0;
}