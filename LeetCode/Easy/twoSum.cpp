#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};

void display(vector<int>& n) {
    cout << "[";
    for (int i = 0; i < n.size(); i++) {
        cout << n[i] << ", ";
    }
    cout << "]" << endl;
}

int main() {
    Solution sol;
    vector<int> n = {2, 7, 11, 15};
    vector<int> case1 = sol.twoSum(n, 9);
    display(case1);
    
    vector<int> m = {3, 2, 4};
    vector<int> case2 = sol.twoSum(m, 6);
    display(case2);
    
    vector<int> p = {3, 3};
    vector<int> case3 = sol.twoSum(p, 6);
    display(case3);
    
    return 0;
}


/*
? -- doubt/question: --

*THE FOLLOWING DOES NOT WORK: vector<int> ans1 = sol.twoSum({2, 7, 11, 15}, 9);
In here, you try to pass an initializer list {2, 7, 11, 15, 9} directly to the function twoSum.
This initializer list creates a temporary object, and you are trying to bind a non-const lvalue reference (vector<int>& nums) to this temporary object, which is not allowed in C++.

*SOLUTION SUGGESTED BY CHATGPT:
To fix this, you can change the function signature to accept a const reference or pass the initializer list to a named variable and then pass that variable to the function.
    vector<int> twoSum(const vector<int>& nums, int target) {
*/