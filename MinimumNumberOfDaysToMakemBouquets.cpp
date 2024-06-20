#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    int getNumberOfBouquets(vector<int>& bloomDay, int mid, int k) {
        int numberOfBouquets = 0;
        int count = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= mid) {
                count++;
            } else {
                count = 0;
            }

            if (count == k) {
                numberOfBouquets++;
                count = 0;
            }
        }
        return numberOfBouquets;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = 0, high = *max_element(bloomDay.begin(), bloomDay.end());

        int minDays = -1;
        while (low <= high) {
            int mid = (low + high) / 2;

            if (getNumberOfBouquets(bloomDay, mid, k) >= m) {
                minDays = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return minDays;
    }
};