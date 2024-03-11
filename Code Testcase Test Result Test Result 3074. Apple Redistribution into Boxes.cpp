class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int res=0;
        int sum=0;
        int n=apple.size(),m=capacity.size();
        for(int i=0;i<n;i++){
            sum+=apple[i];
        }
        sort(capacity.begin(),capacity.end(),greater<int>());
        int crates=0;
        for(int i=0;i<m;i++){
            crates+=capacity[i];
            res++;
            if(crates >= sum)
                return res;
        }
        return -1;
        
    }
};
