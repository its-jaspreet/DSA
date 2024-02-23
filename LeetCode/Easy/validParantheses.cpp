#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> stack = {};
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stack.push_back(s[i]);
            } else if (!stack.empty() && 
            ((s[i] == ')' && stack[stack.size() - 1] == '(') || 
            (s[i] == ']' && stack[stack.size() - 1] == '[') || 
            (s[i] == '}' && stack[stack.size() - 1] == '{'))) {
                stack.pop_back();
            } else {
                return false;
            }
        }
        return stack.empty();
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

    string case5 = "([{()()[()]}]]";
    bool ans5 = sol.isValid(case5);
    cout << ans5 << endl;

    string case6 = "]";
    bool ans6 = sol.isValid(case6);
    cout << ans6 << endl;

    return 0;
}