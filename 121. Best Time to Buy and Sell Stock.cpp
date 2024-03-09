class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minTillNow=INT_MAX,res=0,n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i] < minTillNow){
                minTillNow = prices[i];
                continue;
            }
            res=max(res,prices[i]-minTillNow);
        }
        return res;
    }
};
