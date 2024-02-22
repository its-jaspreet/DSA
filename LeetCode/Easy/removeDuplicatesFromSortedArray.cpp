#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev, curr = nums.size() - 1;
        if (curr == -1 || curr == 0) {
            return nums.size();
        }
        else {
            while (curr >= 1) {
                prev = curr - 1;
                if (nums[curr] == nums[prev]) {
                    int j;
                    for (j = curr; j < nums.size() - 1; j++) {
                        nums[j] = nums[j+1];
                    }
                    nums.pop_back();
                }
                curr--;
            }
            return nums.size();
        }
    }
};

int main() {
    Solution mySol;

    vector<int> case1 = {1,1,2};
    int ans1 = mySol.removeDuplicates(case1);
    cout << ans1 << endl;

    vector<int> case2 = {0,0,1,1,1,2,2,3,3,4};
    int ans2 = mySol.removeDuplicates(case2);
    cout << ans2 << endl;

    return 0;
}

