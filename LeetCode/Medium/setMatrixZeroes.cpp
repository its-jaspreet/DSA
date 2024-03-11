#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> temp = {};
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == 0) {
                    temp.push_back({i, j});
                }
            }
        }
        for (int i = 0; i < temp.size(); i++) {
            int m = temp[i][0];
            int n = temp[i][1];
            for (int t = 0; t < matrix[0].size(); t++) {
                matrix[m][t] = 0;
            }
            for (int t = 0; t < matrix.size(); t++) {
                matrix[t][n] = 0;
            }
        }

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