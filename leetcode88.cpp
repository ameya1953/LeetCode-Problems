#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // m is the size of nums1 array and n is the size of nums2 array.

        
        for(int i=0; i<n; i++){
            nums1[m + i] = nums2[i];
        }   

        sort(nums1.begin(), nums1.end());
    }
};

int main(){

    return 0;
}