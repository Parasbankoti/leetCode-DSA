class Solution {
public:

    int check(vector<int>&nums,int n){
        vector<int>dp(n+1,0);
        int steal=0;
        dp[0]=0;
        dp[1]=nums[0];
        for(int i=2;i<=n;i++){
            steal=max(dp[i-1] , dp[i-2]+nums[i-1]);
            dp[i]=steal;
        }
        return dp[n];
    }

    int rob(vector<int>& nums) {
        
         int res=0,n=nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
         int withoutLast = check(nums,n-1);
         nums.erase(nums.begin());
         n=nums.size();
         int withoutFirst = check(nums,n);
         return max(withoutFirst,withoutLast);
    }
};
