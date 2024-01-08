class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res=INT_MAX,curr=0,i=0,j=0;
        while(j<nums.size()){
            curr+=nums[j];
            while(curr>=target){
                int temp = j-i+1;
                res=min(res,temp);
                curr-=nums[i++];
            }
            j++;
        }
        return res==INT_MAX ? 0  :res ;
    }
};
