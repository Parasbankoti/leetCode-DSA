class Solution {
    typedef pair<int,int> P;
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int i:arr){
            mp[i]++;
        }
        priority_queue<P,vector<P>,greater<P>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        while(k--){
          if(pq.top().first == 1)
          pq.pop();
          else{
              int fir = pq.top().first;
              int sec = pq.top().second;
              pq.pop();
              fir-=1;
              pq.push({fir,sec});
          }
        }
        int sz=pq.size();
        return sz;

    }
};
