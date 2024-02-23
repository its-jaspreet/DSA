#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
    }
};

int main() {
    Solution mySol;

    vector<int> case1 = {1,3,5,6};
    int ans1 = mySol.searchInsert(case1, 5);
    cout << ans1 << endl;

    int ans2 = mySol.searchInsert(case1, 2);
    cout << ans2 << endl;

    int ans2 = mySol.searchInsert(case1, 7);
    cout << ans3 << endl;

    return 0;
}