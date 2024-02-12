class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]]++;
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(!mp.count(nums[i]+1)){
                int temp=0,curr=nums[i];
                while(mp.count(curr)){
                    temp++;
                    mp.erase(curr);
                    curr-=1;
                }
                res=max(res,temp);
            }
        }
        return res;
    }
};
