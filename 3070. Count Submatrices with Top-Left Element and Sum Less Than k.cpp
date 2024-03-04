class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int res=0,n=grid.size(),m=grid[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 && j!=0){
                    grid[i][j]+=grid[i][j-1];
                }
                if(j==0 && i!=0){
                    grid[i][j]+=grid[i-1][j];
                }
                else if(i!=0 && j!=0){
                    grid[i][j]+=grid[i-1][j]+grid[i][j-1]-grid[i-1][j-1];
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] <=k)
                res++;
            }
        }
        return res;
    }
};
