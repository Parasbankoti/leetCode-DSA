class Solution {
public:

    void dfs(vector<vector<int>>& rooms, vector<int>& vis,int ind){
        if(vis[ind] == 1) return;
        vis[ind]=1;

        for(auto i:rooms[ind]){
            if(vis[i] == 0){
                dfs(rooms,vis,i);
            }
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int sz=rooms.size();
    // BFS below
        // unordered_map<int,vector<int>>adj;
        // for(int i=0;i<rooms.size();i++){
        //     for(int j=0;j<rooms[i].size();j++){
        //         adj[i].push_back(rooms[i][j]);
        //     }
        // }
        vector<int>vis(sz,0);
        dfs(rooms,vis,0);
      
        for(int i=0;i<vis.size();i++){
            if(vis[i] == 0)
            return false;
        }
        return true;
    }
};
