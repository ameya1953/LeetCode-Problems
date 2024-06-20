#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicates;
        
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1; // Convert to zero-based index
            
            // If the value at nums[index] is negative, it means the index+1 has been seen before
            if (nums[index] < 0) {
                duplicates.push_back(abs(nums[i]));
            } else {
                // Mark the value at nums[index] as seen by negating it
                nums[index] = -nums[index];
            }
        }
        
        return duplicates;
    }
};
