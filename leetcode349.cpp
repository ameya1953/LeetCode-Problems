#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        int n = nums1.size();
        int m = nums2.size();

        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if(nums1[i] == nums2[j]){
                    temp.push_back(nums1[i]);
                }
            }
        }
        removeDuplicates(temp);
        return temp;
    }
    void removeDuplicates(vector<int>& vec) {

        sort(vec.begin(), vec.end());

        // Use unique to remove duplicates
        auto last = unique(vec.begin(), vec.end());

        // Resize the vector to the new size
        vec.erase(last, vec.end());
}
};

int main(){

    return 0;
}