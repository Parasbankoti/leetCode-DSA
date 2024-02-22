class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int, vector<int>> adj;
        for (auto i : trust) {
            adj[i[0]].push_back(i[1]);
        }
        vector<int> indegree(n + 1, 0);
        vector<int> outdegree(n + 1, 0);

        for (int j = 1; j <= n; j++) {
            for (auto i : adj[j]) {
              indegree[i]++;
              outdegree[j]++;
            }
        }
        for (int i = 1; i <= n; i++) {
           if(indegree[i] == n-1 && outdegree[i] == 0) return i;
        }
        return -1;
    }
};
