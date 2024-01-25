class Solution {
public:
    int characterReplacement(string s, int k) {
        int res=0;
        unordered_map<char,int>mp;
        int left=0,right=0;
        int longest=0;
        while(right < s.size()){
            mp[s[right]]++;
            longest = max(longest,mp[s[right]]);
            if(right-left+1 - longest > k){
                mp[s[left]]--;
                left++;

            }
            res=max(res,(right-left+1));
            right++;
        } 
        return res;
    }
};
