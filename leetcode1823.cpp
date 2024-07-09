#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#include <vector>
using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> temp;
        
        // Fill the vector with people numbered from 1 to n
        for(int i = 1; i <= n; i++){
            temp.push_back(i);
        }

        int index = 0;
        while(temp.size() > 1) {
            // Find the next person to be eliminated
            index = (index + (k - 1)) % temp.size();
            temp.erase(temp.begin() + index);
        }

        // The last remaining person is the winner
        return temp[0];
    }
};


int main(){

    return 0;
}