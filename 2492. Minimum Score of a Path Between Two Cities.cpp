class Solution {
public:

    void dfs( unordered_map<int,vector<pair<int,int>>>&adj ,int node,int n,int& res,vector<int>&vis,int weight){
        vis[node]=1;
        

        for(auto i:adj[node]){
            int currNode = i.first,currWeight=i.second;
            if(vis[currNode] == 0)
            {   
                res=min(res,currWeight);
                dfs(adj,currNode,n,res,vis,currWeight);}
            else{
                res=min(res,currWeight);

            }
        }
    }

    int minScore(int n, vector<vector<int>>& roads) {
        int res=INT_MAX;
        unordered_map<int,vector<pair<int,int>>>adj;
        for(auto i:roads){
            int curr=i[0],next=i[1],wei=i[2];
            adj[curr].push_back({next,wei});
            adj[next].push_back({curr,wei});
        }
       vector<int>vis(n+1,0);
        dfs(adj,1,n,res,vis,INT_MAX);
        return res;
    }
};
