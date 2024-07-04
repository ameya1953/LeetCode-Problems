#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n){
            k = k % n;  // Condition for k>n.
        }
        
        vector<int> temp(nums.end() - k, nums.end());
        
        for (int i = n - 1; i >= k; --i) {   // Shifting the elements of nums to the right by (n-k).
            nums[i] = nums[i - k];
        }
        for (int i = 0; i < k; ++i) {        // Substituting the value of k elements from temp to nums.
            nums[i] = temp[i];
        }
        for(int i: temp){
            cout<<i<<" ";
        }
    }
};

int main(){

    return 0;
}