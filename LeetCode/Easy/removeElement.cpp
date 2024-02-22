#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> removeElement(vector<int>& nums, int val) {
        int i = 0, j = nums.size() - 1, ctr = 0;
        while (i <= j) {
            if (nums[j] == val) {
                j -= 1;
            }
            if (nums[i] != val) {
                i += 1;
            } else {
                int temp;
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                ctr++;
            }
        }
        for (int k = 0; k <= ctr; k++) {
            nums.pop_back();
        }
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

    vector<int> case3 = {2};
    vector<int> ans3 = mySol.removeElement(case3, 2);
    for (int i = 0; i < ans3.size(); i++) {
        cout << ans3[i] << " ";
    }
    cout << endl;
    //cout << ans3 << endl;

    vector<int> case4 = {};
    vector<int> ans4 = mySol.removeElement(case3, 3);
    for (int i = 0; i < ans4.size(); i++) {
        cout << ans4[i] << " ";
    }
    cout << endl;
    //cout << ans4 << endl;

    return 0;
}