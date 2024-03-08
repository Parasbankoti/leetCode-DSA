class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string>res;
        string temp=words[0];
        int prev=groups[0];
        res.push_back(temp);
        for(int i=1;i<words.size();i++){
            if(prev != groups[i]){
                res.push_back(words[i]);
                prev=groups[i];
            }
        }
        return res;
    }
};
