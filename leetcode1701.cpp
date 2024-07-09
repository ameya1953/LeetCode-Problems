#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        int currentTime = customers[0][0]; // Start time from the arrival of the first customer
        long long totalWaitingTime = 0;    // We have to find this...

        for(int i = 0; i < n; i++) {
            if (currentTime < customers[i][0]) {
                currentTime = customers[i][0];
            }
            currentTime += customers[i][1];
            totalWaitingTime += (currentTime - customers[i][0]);
        }

        return totalWaitingTime / n;
    }
};


int main(){

    return 0;
}