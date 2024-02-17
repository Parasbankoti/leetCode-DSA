class Solution {
    typedef pair<int,pair<int,int>>P;
public:
    int findTheCity(int n, vector<vector<int>>& edges, int thresh) {
        unordered_map<int,vector<pair<int,pair<int,int>>>>adj;
        for(auto i:edges){
            adj[i[0]].push_back({i[2],{i[1],thresh}});
            adj[i[1]].push_back({i[2],{i[0],thresh}});

        }
        vector<int>vec;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            priority_queue<P,vector<P>,greater<P>>pq;
            vector<int>vis(n,0);
            set<int>st;
            pq.push({0,{i,thresh}});
            int nodeCount=0;

            while(!pq.empty()){
                pair<int,int>temp = pq.top().second;
                int currNode = temp.first;
                int currThresh = temp.second;
                int currWeight = pq.top().first;
                vis[currNode]=1;
                pq.pop();


                for(auto j:adj[currNode]){
                    int newWeight = j.first;
                    int newNode = j.second.first;
                    int newThresh = currThresh - newWeight; 
                    if(vis[newNode] == 0 && newThresh >= 0){
                       st.insert(newNode);
                        nodeCount++;
                        pq.push({newWeight,{newNode,newThresh}});
                    }
                }
            }
            int curSize = st.size(); 
            mini = min(mini,curSize);
           vec.push_back(curSize);
        }
        for(int i=vec.size()-1; i>=0 ;i--){
            if(mini == vec[i])
            return i;
        }
        return -1;
    }
};
