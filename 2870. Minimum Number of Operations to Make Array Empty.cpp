class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i:nums)
        mp[i]++;
        int res=0;
        for(auto i:mp){
            if(i.second == 1) return -1;
            int temp = i.second/3;
            int rem = i.second%3;
            if(rem == 0) res+=temp;
            else res+=temp+1;
        }
        return res;
    }
};
