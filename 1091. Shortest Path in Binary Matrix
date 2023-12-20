class Solution {
public:
vector<vector<int>>dir = {{1,1},{-1,-1}, {1,0},{-1,0},{0,1},{0,-1},{1,-1},{-1,1}};
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int ans,res;
        int n=grid.size();
        queue<pair<int,int>>q;
        if(grid[0][0] == 0)
        q.push({0,0});
        else return -1;

        int steps=0;
        while(!q.empty()){

            int sz=q.size();
            while(sz--){

            pair<int,int>temp = q.front();
            int row = temp.first;
            int col =temp.second;
            q.pop();
            if(row == n-1 && col == n-1)
            return steps+1;

            for(auto i:dir){
                int newRow = row+i[0],newCol = col+i[1];
                if(newRow >=0 && newCol >=0 && newRow<n && newCol < n && grid[newRow][newCol] == 0){
                    q.push({newRow,newCol});
                    grid[newRow][newCol] = 1;
                }
            }
        }
    steps++;
        }
    return -1;
    }
};
