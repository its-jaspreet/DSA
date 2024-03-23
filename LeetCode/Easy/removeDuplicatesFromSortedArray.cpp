#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> removeDuplicates(vector<int> &arr) {
        int i = arr.size() - 1;
        int c = 1;
        while (i >= 1) {
            if (arr[i] == arr[i-1]) {
                c++;
                int j = i - 1;
                while (arr[j] == arr[i]) {
                    j--;
                }
                for (int k = i; k > j; k--) {
                    arr[k] = arr[j];
                    j++;
                }
            } else {
                c = 1;
            }
            i--;
        }
        return arr;
    }  
};

void display(vector<int>&arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }cout << endl;
}

int main() {
    Solution mySol;

    vector<int> case1 = {1,1,2,2,3,3,3};
    vector<int> ans1 = mySol.removeDuplicates(case1);
    display(ans1);

    vector<int> case2 = {0,0,1,1,1,2,2,3,3,3,4};
    vector<int> ans2 = mySol.removeDuplicates(case2);
    display(ans2);

    return 0;
}

