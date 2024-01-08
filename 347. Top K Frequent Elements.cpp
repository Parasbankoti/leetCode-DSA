class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
       while(k--){
           pair<int,int>temp=pq.top();
           pq.pop();
           res.push_back(temp.second);
           cout<<temp.first<<" "<<temp.second<<"\n";
       }
        return res;
    }
};
