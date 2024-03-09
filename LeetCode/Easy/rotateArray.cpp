#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> rotate(vector<int>& nums, int k) {
        int last = nums.size() - 1;
        k %= nums.size();
        vector<int> temp(k);
        for (int i = 0; i < k; i++) {
            temp[i] = nums[last-i];
        }
        int j = last;
        for (int i = last - k; i >= 0; i--){
            nums[j] = nums[i];
            j--;
        }
        int t = 0;
        for (; j >= 0; j--) {
            nums[j] = temp[t];
            t++;
        }
        return nums;
    }
};

int main() {
    Solution mySol;

    vector<int> case1 = {1,2,3,4,5,6,7,8};
    vector<int> ans1 = mySol.rotate(case1, 3);
    for (int i = 0; i < ans1.size(); i++) {
        cout << ans1[i] << " ";
    }
    cout << endl;
    //cout << ans1 << endl;

    vector<int> case2 = {-1,-100,3,99};
    vector<int> ans2 = mySol.rotate(case2, 2);
    for (int i = 0; i < ans2.size(); i++) {
        cout << ans2[i] << " ";
    }
    cout << endl;
    //cout << ans2 << endl;

    return 0;
}