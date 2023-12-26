class Solution {
public:

    int dfs(int node,unordered_map<int,vector<int>>& adj,vector<bool>& hasApple, int parent){
        int time = 0;
        for(auto i:adj[node]){
            if(i == parent) continue;
            int childHasApple = dfs(i,adj,hasApple,node);
            if(hasApple[i] || childHasApple > 0){
                time+=2+childHasApple;
            }
        }
        return time;
    }

    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        int res;
        unordered_map<int,vector<int>>adj;
        for(auto i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);

        }

        res = dfs(0,adj,hasApple,-1);
        return res;
    }
};
