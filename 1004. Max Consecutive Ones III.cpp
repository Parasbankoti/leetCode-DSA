class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxi=0;
        int left=0,right=0,count=0;
       for(int i=0;i<nums.size();i++){
           if(nums[i] == 0)
           count++;
           while(count > k){
               if(nums[left] == 0){
                   count--;
               }
               left++;
           }
           maxi=max(maxi,i-left+1);
       }
       return maxi;
    }
};
