#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if(n<=3){
            return 0;
        }
        else{
            sort(nums.begin(), nums.end());
            auto newEnd = unique(nums.begin(), nums.end());
            nums.erase(newEnd, nums.end());
            
            int ans1  = nums.at(nums.size() - 4) - nums.at(0);
            
            sort(nums.begin(), nums.end(), greater<int>());
            int ans2 =  nums.at(0) - nums.at(nums.size() - 4);

            return min(ans1, ans2);
        }
    }
};

int main(){

    return 0;
}