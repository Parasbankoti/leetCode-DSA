class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>res;
        unordered_map<int,int>mp;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            maxi=max(maxi,mp[nums[i]]);
        }
        while(maxi--){
            unordered_map<int,int>temp;
            vector<int>curr;
            for(int i=0;i<nums.size();i++){
                
                temp[nums[i]]++;
                if(temp[nums[i]] == 1 && mp[nums[i]] > 0){
                    curr.push_back(nums[i]);
                    mp[nums[i]]--;
                    if(mp[nums[i]] == 0)
                    mp.erase(nums[i]);
                }
            }
            res.push_back(curr);
        }
        return res;
    }
};
