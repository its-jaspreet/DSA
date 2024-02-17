#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        
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