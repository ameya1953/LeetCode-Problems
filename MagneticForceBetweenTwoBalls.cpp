#include<bits/stdc++.h>
using namespace std;

#include <vector>
#include <algorithm>

class Solution {
public:
    bool isOkayAtDis(int mid, std::vector<int>& position, int m) {
        int countOfBallsPlaced = 1, prevId = 0;
        for(int i = 1; i < position.size(); i++) {
            if(position[i] - position[prevId] >= mid) {
                countOfBallsPlaced++;
                prevId = i;
            }
        }
        return (countOfBallsPlaced >= m);
    } 

    int maxDistance(std::vector<int>& position, int m) {
        std::sort(position.begin(), position.end());
        int l = 1, r = position.back() - position.front(), ans = -1;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(isOkayAtDis(mid, position, m)) {
                ans = mid;
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        return ans;
    }
};