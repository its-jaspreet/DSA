#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> removeElement(vector<int>& nums, int val) {
        if (nums.size() == 0){
            return nums;
        }
        if (nums.size() == 1) {
            if (nums[0] == val) {
                nums.pop_back();
                return nums;
            } else {
                return nums;
            }
        }
        int i = 0, j = nums.size() - 1, ctr = 0;
        while (i <= j) {
            if (nums[i] == val) {
                if (nums[j] != val) {
                    swap(nums[i], nums[j]);
                    j--;
                } else {
                    j--;
                    continue;
                }
            }
            i++;
        }
        while(!nums.empty() && nums.back() == val) {
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
    vector<int> ans4 = mySol.removeElement(case4, 3);
    for (int i = 0; i < ans4.size(); i++) {
        cout << ans4[i] << " ";
    }rot
    cout << endl;
    //cout << ans4 << endl;

    vector<int> case5 = {4};
    vector<int> ans5 = mySol.removeElement(case5, 3);
    for (int i = 0; i < ans5.size(); i++) {
        cout << ans5[i] << " ";
    }
    cout << endl;
    //cout << ans5 << endl;

    vector<int> case6 = {4, 3};
    vector<int> ans6 = mySol.removeElement(case6, 3);
    for (int i = 0; i < ans6.size(); i++) {
        cout << ans6[i] << " ";
    }
    cout << endl;
    //cout << ans6 << endl;

    vector<int> case7 = {3, 4};
    vector<int> ans7 = mySol.removeElement(case7, 3);
    for (int i = 0; i < ans7.size(); i++) {
        cout << ans7[i] << " ";
    }
    cout << endl;
    //cout << ans7 << endl;

    return 0;
}