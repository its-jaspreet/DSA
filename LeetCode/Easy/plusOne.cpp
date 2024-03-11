#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int num = 0, k = 0;
        for (int i = digits.size() - 1; i >= 0; i--) {
            num = num + (digits[i] * pow(10, k));
            cout << num << "hm";
            k += 1;
        }
        cout << num << "\t";

        return digits;
    }

    void display(vector<int> &ans) {
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
};


int main() {
    Solution mySol;

    vector<int> case1 = {1,2,3};
    vector<int> ans1 = mySol.plusOne(case1);
    mySol.display(ans1);

    vector<int> case2 = {4,3,2,1};
    vector<int> ans2 = mySol.plusOne(case2);
    mySol.display(ans2);

    vector<int> case3 = {9};
    vector<int> ans3 = mySol.plusOne(case3);
    mySol.display(ans3);

    vector<int> case4 = {};
    vector<int> ans4 = mySol.plusOne(case4);
    mySol.display(ans4);

    vector<int> case5 = {3, 5, 9};
    vector<int> ans5 = mySol.plusOne(case5);
    mySol.display(ans5);

    vector<int> case6 = {8, 9, 9};
    vector<int> ans6 = mySol.plusOne(case6);
    mySol.display(ans6);

    return 0;
}