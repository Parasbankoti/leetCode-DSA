class Solution {
public:

    void perm(vector<int>& nums,vector<vector<int>>& res,vector<int> temp,int ind){
        if(ind == nums.size()){
            int cnt = count(res.begin(), res.end(), temp);
            if(cnt==0)
            res.push_back(temp);
            return;
            
            
        }

        perm(nums,res,temp,ind+1);
        temp.push_back(nums[ind]);
        perm(nums,res,temp,ind+1);

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        perm(nums,res,temp,0);
        return res;
    }
};
