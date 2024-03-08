class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int res=0;
        unordered_map<int,int>mp;
        for(auto i:nums)
        mp[i]++;
        int maxi=0;
        for(auto i:mp){
            if(maxi < i.second)
            maxi=i.second;
        }
        for(auto i:mp){
            if(i.second == maxi){
                res+=maxi;
            }
        }
        return res;

    }
};
