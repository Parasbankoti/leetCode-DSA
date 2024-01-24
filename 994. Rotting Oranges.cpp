class Solution {
public:
vector<int> dir = {-1,0,1,0,-1};
    int orangesRotting(vector<vector<int>>& grid) {
        int fresh=0,res=-1;
        int row=grid.size(),col=grid[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
                else if(grid[i][j] == 1)
                fresh++;
            }
        }
        while(!q.empty()){
            int sz=q.size();
            

            while(sz--){
                pair<int,int>temp = q.front();
                q.pop();
                int currRow = temp.first;
                int currCol = temp.second;

                for(int i=0;i<4;i++){
                    int newRow = currRow+dir[i];
                    int newCol = currCol+dir[i+1];
                    if(newRow >=0 && newCol >=0 && newRow < row && newCol < col && grid[newRow][newCol] == 1){
                        q.push({newRow,newCol});
                        grid[newRow][newCol] = 2;
                        fresh--;
                    }

                }

            }
            res++;
        }
        if(fresh > 0) return -1;
        if(res == -1) return 0;

        return res;
    }
};
