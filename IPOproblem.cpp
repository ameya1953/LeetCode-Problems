#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMaximizedCapital(int k, int W, vector<int>& p, vector<int>& c) {
        int n = p.size();
        vector<pair<int, int>> projects;
        for (int i = 0; i < n; i++) {
            projects.push_back({p[i], c[i]});
        }

        sort(projects.begin(), projects.end(), [](pair<int, int> a, pair<int, int> b) { //Lambda Function Syntax
            return a.second < b.second;
        });

        priority_queue<int> pq;
        int i = 0;
        while (k > 0) {
            while (i < n && projects[i].second <= W) {
                pq.push(projects[i++].first);
            }
            if (!pq.empty()) {
                W += pq.top();
                pq.pop();
            }
            else {
                break; // No more projects can be taken
            }
            k--;
        }
        return W;
    }
};