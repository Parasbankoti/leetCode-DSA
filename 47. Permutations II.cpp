class Solution {
public:

    void perm(vector<vector<int>>& res,vector<int>&temp,vector<int>& nums,vector<int>&vis){
        if(temp.size() == nums.size()){
            int cnt=count(res.begin(),res.end(),temp);
            if(cnt == 0)
            res.push_back(temp);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(vis[i] == 0){
                vis[i]=1;
                temp.push_back(nums[i]);
                perm(res,temp,nums,vis);
                vis[i]=0;
                temp.pop_back();
            }
        }

    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>temp;
        vector<int>vis(nums.size(),0);
        perm(res,temp,nums,vis);
        return res;

    }
};
