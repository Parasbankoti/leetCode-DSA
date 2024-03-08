class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,INT_MAX);
        dp[0]=0;
        for(int i=0;i<n;i++){
            int end=i+nums[i];
            if( end > n-1) end=n-1;
            for(int j=i+1;j<=end;j++){
                dp[j]=min(dp[j], dp[i]+1);
            }
        }
        for(int i:dp)
         cout<<dp[i]<<" ";
        
        return dp[n-1];
    }
};
