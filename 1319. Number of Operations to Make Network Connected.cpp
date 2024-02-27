class Solution {
public:

    void dfs(vector<int>&vis, unordered_map<int,vector<int>>&adj,int ind){
        if(vis[ind]==1 ) return;
        vis[ind]=1;
        for(auto i:adj[ind]){
            dfs(vis,adj,i);
        }
    }

    int makeConnected(int n, vector<vector<int>>& connections) {
        int totalCabels = connections.size();
        if(totalCabels < n-1) return -1;
      unordered_map<int,vector<int>>adj;
      for(auto i:connections){
          adj[i[0]].push_back(i[1]);
          adj[i[1]].push_back(i[0]);
      }
      vector<int>vis(n,0);
    int res=0;
      for(int i=0;i<n;i++){
          if(vis[i] == 0){
            res++;
            dfs(vis,adj,i);
          }
      }
      return res-1;


    }
};
