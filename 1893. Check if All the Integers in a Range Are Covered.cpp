class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<vector<int>>merge;
        sort(ranges.begin(),ranges.end());
        int le=ranges[0][0],ri=ranges[0][1];
        for(int i=1;i<ranges.size();i++){
            if(ri >= ranges[i][0]-1 ){
                ri=max(ri,ranges[i][1]);
                continue;
            }
            else{
                merge.push_back({le,ri});
                le=ranges[i][0];
                ri =ranges[i][1];
            }
        }
                merge.push_back({le,ri});
        for(auto i:merge){
            if(left>=i[0] && right <= i[1])
            return true;
        }
        return false;

    }
};
