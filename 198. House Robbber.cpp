class Solution {
public:

    int check(vector<int>&nums,int ind,vector<int>& vis){
        if(ind >=nums.size()) return 0;

        if(vis[ind] != INT_MIN) return vis[ind];
        int steal = nums[ind]+check(nums,ind+2,vis);
        int skip = check(nums,ind+1,vis);
        return vis[ind] = max(steal,skip);
    }

    int rob(vector<int>& nums) {
        vector<int>vis(nums.size(),INT_MIN);
        int res = check(nums,0,vis);
        return res;
    }
};
