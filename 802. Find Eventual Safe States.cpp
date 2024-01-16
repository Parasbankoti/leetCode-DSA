class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>res;
        vector<int>indegree(graph.size(),0);
        for(int i=0;i<graph.size();i++){
            for(int j=0;j<graph[i].size();j++){
                indegree[i]++; 
            }
        }
        unordered_map<int,vector<int>>adj;

          for(int i=0;i<graph.size();i++){
            for(int j=0;j<graph[i].size();j++){
               adj[graph[i][j]].push_back(i);
            }
        }
        queue<int>q;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0)
           {res.push_back(i);
                q.push(i);}
        }

        while(!q.empty()){
            int curr = q.front();
            q.pop();

            for(auto i:adj[curr]){
                indegree[i]--;
                if(indegree[i]==0)
                {
                    res.push_back(i);
                    q.push(i);
                    }
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};
