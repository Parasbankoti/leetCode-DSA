class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> mp;
        for (int i = 0; i < s1.size(); i++) {
            mp[s1[i]]++;
        }
        int uniq = mp.size();
        int left = 0, res = INT_MAX;
        for (int i = 0; i < s2.size(); i++) {
            mp[s2[i]]--;
            if (mp[s2[i]] == 0) {
                uniq--;
            }
            while (uniq == 0) {

                res = min(res, i - left + 1);
                cout << res << " ";
                mp[s2[left]]++;
                if (mp[s2[left]] > 0)
                    uniq++;
                left++;
            }
        }
        return res == s1.size();
    }
};
