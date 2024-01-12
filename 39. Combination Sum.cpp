class Solution {
public:

    void check(int ind,vector<int>temp, vector<vector<int>>&res, vector<int>&nums){
        if(nums.size() == ind){
            res.push_back(temp);
            return ;
        }
        check(ind+1,temp,res,nums);
        temp.push_back(nums[ind]);
        check(ind+1,temp,res,nums);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>temp;
        check(0,temp,res,nums);
        return res;
    }
};
