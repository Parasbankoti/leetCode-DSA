class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1,res=0,n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i])
            count++;
            if(count >n/2)
            return nums[i];
            else if(nums[i-1] != nums[i]){
                count=1;

            }
        }
        return nums[0];
    }
};
