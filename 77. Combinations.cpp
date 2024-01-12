class Solution {
public:

    void combi(vector<int>& vis,int n,int k,vector<vector<int>>& res,int ind,vector<int>&temp){
        if(vis[ind] == 1) return;
       
        if(temp.size() == k){
            res.push_back(temp);
            return;
        }
        for(int i=ind;i<=n;i++){
            if(vis[i] == 0){
              vis[i]=1;
              temp.push_back(i);
              combi(vis,n,k,res,i+1,temp);
              temp.pop_back();
             vis[i]=0;
            }
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>res;
        vector<int>temp;
        vector<int>vis(n+2,0);
        combi(vis,n,k,res,1,temp);
        return res;
    }
};
