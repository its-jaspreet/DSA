#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    vector<int> removeDuplicates(vector<int>& nums) {
        int c = 0;
        for (int i = 0; i < nums.size()-1; i++) {
            if (nums[i] = nums[i+1]) {
                c += 1;
                if (c > 1) {
                    int k = i;
                    while (nums[k] == nums[i]) {
                        nums[k] = INT_MIN;
                        k++;
                    }
                    i = k;
                }
            } else {
                c = 0;
            }
        }
    }
};

void display(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
    }
    cout << endl;
}

int main() {
    Solution mySol;

    vector<int> case1 = {0,0,1,1,1,1,2,3,3};
    vector<int> ans1 = mySol.removeDuplicates(case1);
    display(ans1);

    return 0;

}