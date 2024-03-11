#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> setZeroes(vector<vector<int>>& matrix) {
        return matrix;
    }
};

int main() {
    Solution mySol;
    vector<vector<int>> case1 = {{1,0,1,1,1},{1,1,1,1,1},{1,1,1,0,1},{1,1,1,1,1}};
    vector<vector<int>> ans1 = mySol.setZeroes(case1);

    for (int i = 0; i < ans1.size(); i++) {
        for (int j = 0; j < ans1[i].size(); j++) {
            cout << ans1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}