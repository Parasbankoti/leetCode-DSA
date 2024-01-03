class Solution {
public:

    vector<int> dir ={-1,0,1,0,-1};
    int maxDistance(vector<vector<int>>& grid) {
        int res=-1,count=INT_MIN;
        queue<pair<int,int>>q;
        int n=grid.size();

        vector<vector<int>>vis(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1){
                    q.push({i,j});
                    vis[i][j] = 1;

                }
            }
        }

        while(!q.empty()){
            int sz = q.size();

            while(sz--){
                pair<int,int>temp = q.front();
                q.pop();
                int currRow = temp.first,currCol = temp.second;

                for(int i=0;i<4;i++){
                    int newRow = dir[i]+currRow,newCol = currCol+dir[i+1];

                    if(newRow>=0 && newCol>=0 && newRow<n && newCol <n && vis[newRow][newCol] == 0){
                        grid[newRow][newCol] = 1+grid[currRow][currCol];
                        q.push({newRow,newCol});
                        count=max(grid[newRow][newCol] , count);
                        vis[newRow][newCol]=1;
                    }
                }
            }
        }
    

    if(count ==INT_MIN) return -1;
    
    return count-1;
    }
};
