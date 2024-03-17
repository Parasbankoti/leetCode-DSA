class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        int i=0,n=nums.size();
        int sum=0,res=0;
        mp[0]=-1;
        while(i<n){
            nums[i] == 0 ? sum-=1 : sum+=1;
            if(mp.count(sum)){
                res=max(res,i-mp[sum]);
                i++;
                continue;
            }
            mp[sum]=i;

            
            i++;
        }
        return res;
    }
};
