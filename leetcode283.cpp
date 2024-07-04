#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0; // index for placing the next non-zero element

        // Move all non-zero elements to the front
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }

        // Fill the remaining elements with zeros
        for (int i = j; i < n; i++) {
            nums[i] = 0;
        }
    }
};
