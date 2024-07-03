#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        for(int i=0; i<size; i++){
            for(int j=size; j>0; j--){
                if(nums[i] + nums[j] == target)
                    //cout<<"["<<i<<j<<"]"<<" "; //Not allowed
                    return {i,j};
            }
        }
        return {}; //If there is no value satisfying, then we return empty brackets
    }
};

int main(){
    int target;
    cout<<"Enter the target sum: ";
    cin>>target;
    vector<int> nums;
    cout<<"Enter the array: ";
    for(int i:nums){
        cin>>i;
    }
    vector<int> twoSum(vector<int>nums, int target);

    return 0;
}