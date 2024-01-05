class Solution {
public:

    void dfs(int i,int j,vector<vector<int>>& grid ){

        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j] == 0)
        return;

        grid[i][j]=0;
        dfs(i+1,j,grid);
        dfs(i,j+1,grid);
        dfs(i-1,j,grid);
        dfs(i,j-1,grid);

    }

    int numEnclaves(vector<vector<int>>& grid) {
        int res=0;
        int r=grid.size(),c=grid[0].size();

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j] == 1 && (i==0 || j==0 || i==r-1 || j== c-1)){
                    dfs(i,j,grid);
                }
            }
        }

         for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j] == 1){
                    res++;
                }
            }
        }
        return res;
    }
};
