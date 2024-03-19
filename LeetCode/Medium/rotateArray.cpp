#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> rotate(vector<int>& nums, int k) {
        vector<int> temp = {};

        return nums;
    }
};

void display(vector<int> &nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    Solution mySol;
    vector<int> case1 = {1,2,3,4,5,6,7,8};
    vector<int> ans1 = mySol.rotate(case1, 3);
    display(ans1);
    return 0;
}