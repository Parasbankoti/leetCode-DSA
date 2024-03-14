class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int res=0,n=nums.size();
        unordered_map<int,int>mp;
        mp[0]=1;
        int curr=0;
        for(int i=0;i<n;i++){
            curr+=nums[i];
            int diff = curr-goal;
            if(mp.count(diff))
                res+=mp[diff];
               
                mp[curr]++;

        }

        return res;
    }
};
