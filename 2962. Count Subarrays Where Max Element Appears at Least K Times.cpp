class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi = *max_element(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        long long res=0;
        int l=0,r=0,n=nums.size();
        int count=0;
        while(r<n){
           if(nums[r] == maxi)
           count++;
           while(count == k){
                res+=n-r;
                //cout<<res<<" ";
                if(nums[l] == maxi)
                    count--;
                l++;
                
           }
           r++;
        }
        return res;
    }
};
