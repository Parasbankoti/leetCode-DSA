class Solution {
public:

    void perm(vector<vector<int>>&res, vector<int>&vis,vector<int>&nums,vector<int>&temp){
        if(temp.size() == nums.size()){
            res.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(vis[i] == 0){
                vis[i]=1;
                temp.push_back(nums[i]);
                perm(res,vis,nums,temp);
                vis[i]=0;
                temp.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>vis(nums.size(),0);
        vector<int>temp;
        perm(res,vis,nums,temp);
        return res;
    }
};
