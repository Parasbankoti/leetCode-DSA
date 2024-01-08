class Solution {
public:
typedef pair<int,pair<int,int>>p;
    int minimumEffortPath(vector<vector<int>>& heights) {
        int res=0;
        int r=heights.size(),c=heights[0].size();
        vector<vector<int>>vis(r,vector<int>(c,INT_MAX));
        priority_queue<p,vector<p>,greater<p>>pq;
        pq.push({0,{0,0}});
        vis[0][0]=0;
        vector<int>dir={-1,0,1,0,-1};
        while(!pq.empty()){
            int currDiff=pq.top().first;
            pair<int,int>temp=pq.top().second;
            pq.pop();

            int currRow=temp.first,currCol=temp.second;

            for(int i=0;i<4;i++){
                int newRow=currRow+dir[i],newCol=currCol+dir[i+1];

                if(newRow>=0 && newCol>=0 && newRow<r && newCol<c){
                    int newDiff = abs(heights[newRow][newCol]-heights[currRow][currCol]);
                    int updatedDiff = max(newDiff,currDiff);
                    if(vis[newRow][newCol] > updatedDiff){
                        //cout<<
                        vis[newRow][newCol] = updatedDiff;
                        pq.push({updatedDiff,{newRow,newCol}});
                    }

                }

            }
        }
        return vis[r-1][c-1];
    }
};
