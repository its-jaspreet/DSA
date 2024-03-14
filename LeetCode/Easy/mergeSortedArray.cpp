#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k = nums1.size() - 1;
        int i = m - 1;
        int j = n - 1;
        if (m == 0) {
            nums1 = nums2;
        } else {
            while (k > 0 && j >= 0) {
                if (nums2[j] > nums1[i]) {
                    nums1[k] = nums2[j];
                    k--;
                    j--;
                } else {
                    nums1[k] = nums1[i];
                    k--;
                    i--;
                }

                if (i < 0) {
                    while (j >= 0) {
                        nums1[k] = nums2[j];
                        k--;
                        j--;
                    }
                    break;
                }
            }
        }
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
 
    vector<int> case11 = {1,3,4,0,0};
    vector<int> case12 = {2,5};
    vector<int> ans1 = mysol.merge(case11, 3, case12, 2);
    display(ans1);

    return 0;
}