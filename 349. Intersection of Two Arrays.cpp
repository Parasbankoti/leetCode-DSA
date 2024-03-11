class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        unordered_map<int,int>mp;
        for(auto i:nums1){
            mp[i]++;
        }
        for(auto i:nums2){
            if(mp.count(i))
        {
            res.push_back(i);
            mp.erase(i);    
        }
        }
        return res;
    }
};
