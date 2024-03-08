class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        bool res=false;
        queue<pair<int,int>>q;
        q.push({start,arr[start]});
        int n=arr.size();
        vector<int>vis(n,0);
        
        while(!q.empty()){
            int currInd = q.front().first;
            int currVal = q.front().second;
            vis[currInd]=1;
            q.pop();
            if(currVal == 0)
            return true;
            if(currInd + currVal < n && vis[currInd + currVal] == 0 ){
                int newInd=currInd+currVal;
                q.push({newInd,arr[newInd]});
            }
            if(currInd - currVal >= 0 && vis[currInd - currVal] == 0 ){
                int newInd = currInd - currVal;
                q.push({newInd,arr[newInd]});
            }


        }
        return res;

    }
};
