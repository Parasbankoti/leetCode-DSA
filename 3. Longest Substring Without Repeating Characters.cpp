class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int res=0;
        int i=0,j=0;
        while(j<s.length()){
            if(!mp.count(s[j])){
                mp[s[j]]++;
                j++;
                int sz=mp.size();
                res=max(res,sz);
            }
            else{
                mp.erase(s[i]);
                i++;
            }
        }
        return res;
    }
};
