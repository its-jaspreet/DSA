#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> removeElement(vector<int>& nums, int val) {
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[j] = nums[i];
                j++;
            }
        }
        nums.resize(j);
        return nums;
    }
};

int main() {
    Solution mySol;

    vector<int> case1 = {3,2,2,3};
    vector<int> ans1 = mySol.removeElement(case1, 3);
    for (int i = 0; i < ans1.size(); i++) {
        cout << ans1[i] << " ";
    }
    cout << endl;
    //cout << ans1 << endl;

    vector<int> case2 = {0,1,2,2,3,0,4,2};
    vector<int> ans2 = mySol.removeElement(case2, 2);
    for (int i = 0; i < ans2.size(); i++) {
        cout << ans2[i] << " ";
    }
    cout << endl;
    //cout << ans2 << endl;

    return 0;
}