#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums.size() == 1) {
            if (target > nums[nums.size() - 1]) {
                return nums.size();
            } else {
                return 0;
            }
        }
        int i = 0, j = nums.size() - 1;
        while (i <= j) {
            int mid = (i + j)/2;
            if (target > nums[mid]) {
                i = mid + 1;
            } else if (target < nums[mid]) {
                j = mid - 1;
            } else {
                return mid;
            }
        }
        for (int k = 0; k < nums.size(); k++) {
            if (target > nums[nums.size() - 1]) {
                return nums.size();
            } else {
                if (nums[k] < target && nums[k+1] > target) {
                    return k+1;
                }
            }
        }
        return 0;
    }
};

int main() {
    Solution mySol;

    vector<int> case1 = {1,3,5,6};
    int ans1 = mySol.searchInsert(case1, 5);
    cout << ans1 << endl;

    int ans2 = mySol.searchInsert(case1, 2);
    cout << ans2 << endl;

    int ans3 = mySol.searchInsert(case1, 7);
    cout << ans3 << endl;

    return 0;
}