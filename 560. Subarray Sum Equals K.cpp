class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int curr=0;
        mp[0]=1;
      //  cout<<"0 "<<mp[0]<<"\n";
        int res=0;
        for(int i=0;i<n;i++){
            curr+=nums[i];
            int diff = curr-k;
            if(mp.count(diff))
             res+=mp[diff];
            mp[curr]++;
           // cout<<curr<<" "<<res<<"\n";
          //  cout<<curr<<" "<<mp[curr]<<"\n";

        }
        return res;

    }
};
