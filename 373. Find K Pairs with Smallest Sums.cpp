class Solution {
public:
typedef pair<int,pair<int,int>> p;
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>>res;
        priority_queue<p>pq;
        for(auto i:nums1){
            for(auto j:nums2){
                int currSum=i+j;
              
                    if(pq.size() < k ){
                     pq.push({i+j,{i,j}});
                     continue;
                     }
                     if( currSum < pq.top().first){
                     pq.pop();
                     pq.push({i+j,{i,j}});
                     }
                     else break;
            }
        }
        while(k--){
            pair<int,int>temp = pq.top().second;
            res.push_back({temp.first,temp.second});
            pq.pop();
        }
        return res;
    }
};
