#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        return nums1;
    }
};

void display(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int main() {
    Solution mysol;

    vector<int> case11 = {1,2,3,4,0,0,0};
    vector<int> case12 = {2,5,6};
    vector<int> ans1 = mysol.merge(case11, 4, case12, 3);
    display(ans1);

    return 0;
}