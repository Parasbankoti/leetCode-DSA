class Solution {
public:
    bool canJump(vector<int>& nums) {
        int currReach=0,nextReach=0;
        int n=nums.size();
        if(n==1) return true;
        for(int i=0;i<n-1;i++){
            nextReach = max(nextReach,i+nums[i]);
           if(nextReach == i && nums[i] == 0)
           return false;
           if(nextReach >=n-1) return true;
        }
        return false;
    }
};
