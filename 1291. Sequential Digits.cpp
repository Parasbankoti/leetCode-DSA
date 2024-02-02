class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>res;
        for(int i=1;i<=9;i++){
            int curr=i,next=i+1;
            while(next<=9 && curr <=high){
                curr = curr*10+next;
                if(curr >=low && curr <=high) res.push_back(curr);
                next++;
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};
