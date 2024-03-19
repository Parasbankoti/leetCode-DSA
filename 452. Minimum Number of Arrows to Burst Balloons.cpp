class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int res=0,n=points.size();
        sort(points.begin(),points.end());
        int prevSP = points[0][0],prevEP=points[0][1];
        for(int i=1;i<n;i++){
            int currSP=points[i][0],currEP=points[i][1];
            if(prevEP < currSP){
                prevSP=currSP;
                prevEP=currEP;
                res++;
            }
            else{
                prevSP=max(prevSP,currSP);
                prevEP=min(prevEP,currEP);

            }
        }
        //if(curr == )
        return res+1;
    }
};
