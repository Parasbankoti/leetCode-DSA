class Solution {
public:
vector<int>dir = {-1,0,1,0,-1};

    void dfs(queue<pair<int,int>>&q ,vector<vector<int>>& grid,int i,int j,vector<vector<int>>& vis){
        if( i<0 || j<0 || i>=grid.size() || j>=grid[i].size() || vis[i][j]==1 || grid[i][j] == 0 ) 
        return;

     
            q.push({i,j});
        vis[i][j]=1;        

        dfs(q,grid,i+1,j,vis);
        dfs(q,grid,i,j+1,vis);
        dfs(q,grid,i-1,j,vis);
        dfs(q,grid,i,j-1,vis);


    }

    int shortestBridge(vector<vector<int>>& grid) {
        int steps=0;
        queue<pair<int,int>>q;

       int flag=0;
       vector<vector<int>>vis(grid.size(),vector<int>(grid.size(),0));
        int src,end;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                flag=0;
                if(grid[i][j] == 1){
                        dfs(q,grid,i,j,vis);
                     flag=1;
                }
                   if(flag==1) break;
            }
           if(flag==1) break;
        }

    
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                int currRow=q.front().first,currCol=q.front().second;
                q.pop();

                for(int i=0;i<4;i++){
                    int newRow=dir[i]+currRow,newCol=dir[i+1]+currCol;

                    if(newRow>=0 && newCol>=0 && newRow <grid.size() && newCol<grid.size()
                    && vis[newRow][newCol] == 0 ){
                        q.push({newRow,newCol});
                        vis[newRow][newCol] =1;
                         if( grid[newRow][newCol] == 1)
                          return steps;
                    }
                }
            }
            steps++; 
        }
    return steps;
    }
};
