class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int res=0,n=tokens.size();
        int count=0;
        sort(tokens.begin(),tokens.end());
        int left=0,right=n-1;
        while(left<=right){
            if(tokens[left] <= power){
                count++;
                power-=tokens[left];
                left++;
            }
            else if(count>0 && power < tokens[left]){
                count--;
                power+=tokens[right];
                right--;
            }
            else{
                break;
            }
            res=max(res,count);
        }
        return res;
    }
};
