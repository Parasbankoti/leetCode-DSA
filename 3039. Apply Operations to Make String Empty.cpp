class Solution {
public:
    string lastNonEmptyString(string s) {
        string res = "";
        unordered_map<char, int> mp;
        int maxi = 0;

        for (auto i : s) {
            mp[i]++;
             maxi = max(maxi,mp[i]);
        }
        for(int i=s.length()-1;i>=0;i--){
            if(mp[s[i]] == maxi)
            res+=s[i];
            mp[s[i]]--;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
