class Solution {
    typedef pair<int, int> P;

public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        unordered_map<int, vector<pair<int, int>>> adj;
        for (auto i : times) {
            adj[i[0]].push_back({i[2], i[1]});
        }
        priority_queue<P, vector<P>, greater<P>> pq;
        pq.push({0, k});
        vector<int> vis(n + 1, 0);
        vis[k] = 1;
        int finalWeight = 0;
        vector<int> res(n + 1, INT_MAX);
        res[0] = 0;
        int ans = 0;
        while (!pq.empty()) {
            pair<int, int> temp = pq.top();
            pq.pop();
            int currNode = temp.second;
            int currWeight = temp.first;
            vis[currNode] = 1;

            // get out loop
            if (res[currNode] > currWeight)
                res[currNode] = currWeight;

            for (auto i : adj[currNode]) {
                int newNode = i.second, newWeight = i.first;
                if (vis[newNode] == 0) {
                    int updatedWeight = newWeight + currWeight;
                    ans = updatedWeight;
                    pq.push({updatedWeight, newNode});
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            if (vis[i] == 0)
                return -1;
        }
        for (int i = 1; i <= n; i++) {
            cout << res[i] << " ";
        }

        return *max_element(res.begin(), res.end());
    }
};
