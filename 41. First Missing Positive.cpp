class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size(),flag=1;
        for(int i=0;i<n;i++){
            if(nums[i] == 1)
            {
                flag=0;
            }
            if(nums[i] <1 || nums[i] > n)
            nums[i]=1;
        }
        if(flag==1) return 1;

        for(int i=0;i<n;i++){
            if(nums[abs(nums[i])-1] < 0) continue;
            nums[abs(nums[i])-1]*=-1;
        }
        for(int i=0;i<n;i++){
            if(nums[i] > 0)
            return i+1;
        }
      
        return n+1;
    }
};
