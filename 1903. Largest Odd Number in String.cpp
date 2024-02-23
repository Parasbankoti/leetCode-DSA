class Solution {
public:
    string largestOddNumber(string num) {
        string res=num;
        for(int i=num.size()-1;i>=0;i--){
            int x = num[i]-'0';
            if(x%2 != 0){
                return res;
            }
            res.pop_back();
        }
        return "";
    }
};
