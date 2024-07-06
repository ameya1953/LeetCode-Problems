#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int k = 0;
        int e = n-1;

        while(k<e){
            swap(s[k++], s[e--]);
        }
    }
};

int main(){

    return 0;
}