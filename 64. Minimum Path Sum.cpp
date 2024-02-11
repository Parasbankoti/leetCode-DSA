class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        queue<vector<int>> q;

        int sum = 0, res = INT_MAX;
        int row = grid.size(), col = grid[0].size();
        bool vis[201][201];
        memset(vis, false, sizeof(vis));
        vector<vector<int>> dist(row, vector<int>(col, INT_MAX));
        vis[0][0] = true;
        dist[0][0] = grid[0][0];
        q.push({0, 0, grid[0][0]});
        vector<int> dir = {1, 0, 1};
        while (!q.empty()) {

            vector<int> temp = q.front();
            q.pop();

            int currRow = temp[0];
            int currCol = temp[1];
            int currSum = temp[2];
            if (currRow == row - 1 && currCol == col - 1) {
                // cout<<"here";
                res = min(res, currSum);
                // return currSum;
            }
            for (int k = 0; k < 2; k++) {
                int newRow = currRow + dir[k], newCol = currCol + dir[k + 1];

                if (newRow >= 0 && newCol >= 0 && newRow < row &&
                    newCol < col && currSum < dist[newRow][newCol]) {
                    q.push({newRow, newCol, currSum + grid[newRow][newCol]});
                    dist[newRow][newCol] = currSum;
                    vis[newRow][newCol] = true;
                }
            }
        }
        return res;
    }
};
