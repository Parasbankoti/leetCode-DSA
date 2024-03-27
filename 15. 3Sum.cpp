class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>res;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int j=0,k=n-1;
       int currSum=0;
       for(int i=0;i<n;i++){
                    if(nums[i]>0) return ans;

            currSum=nums[i];
            j=i+1;
            k=n-1;
            while(j<k){
                int sum=nums[j]+nums[k];
                if(currSum+sum == 0){
                    res.insert({nums[i],nums[j],nums[k]});
                    j++;
                }
                if(sum+currSum < 0){
                    j++;
                }
                else
                k--;
            }
       }    
       vector<vector<int>>ans;
       for(auto i:res){
        ans.push_back(i);
       }
       return ans;
    }
};
