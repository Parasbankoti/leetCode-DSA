class Solution {
public:

    int h(int n,vector<int>& dp){
        if(n<0) return 0;
        if(n==0) return 1;
        if(dp[n] != -1)
        return dp[n];
        int onestep=h(n-1,dp);
        int twostep=h(n-2,dp);

        return dp[n] = onestep+twostep;
    }

    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        int res=h(n,dp);
        return res;
    }
};
