class Solution {
public:
    string frequencySort(string s) {
        string res="";
        unordered_map<char,int>mp;
        priority_queue<pair<int,char>>pq;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        while(!pq.empty()){
            int curr=pq.top().first;
            while(curr--)
            {res+=pq.top().second;
            }
            pq.pop();
        }
        return res;

    }
};
