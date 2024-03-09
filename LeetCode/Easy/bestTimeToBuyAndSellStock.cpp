#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
    }
};

int main() {
    Solution mySol;

    vector<int> case1 = {1,2,3,4,5,6,7,8};
    int ans1 = mySol.maxProfit(case1);
    cout << ans1 << endl;

    vector<int> case2 = {7,1,5,3,6,4};
    int ans2 = mySol.maxProfit(case2);
    cout << ans2 << endl;

    vector<int> case3 = {7,6,4,3,1};
    int ans3 = mySol.maxProfit(case3);
    cout << ans3 << endl;

    return 0;
}