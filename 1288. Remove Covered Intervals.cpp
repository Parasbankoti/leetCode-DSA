class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int cover=0,sz=intervals.size();
        int currI,currJ;
        sort(intervals.begin(),intervals.end());

        for(int i=0;i<intervals.size();i++){
            cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
        }

        currI=intervals[0][0],currJ=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if( intervals[i][0] == currI){
                currJ = max(currJ,intervals[i][1]);
                cover++;
                continue; 
            }
            if(currI <= intervals[i][0] && currJ >= intervals[i][1]){
                cover++;
            }
            else{
                currI=intervals[i][0],currJ=intervals[i][1];
            }
        }
        return sz-cover;
    }
};
