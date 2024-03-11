class Solution {
public:
    string customSortString(string order, string s) {
        string res="";
        unordered_map<char,int>mp;
        unordered_map<char,int>mp2;

        for(char i:s){
            mp[i]++;
            mp2[i]++;
        }
        for(char i:order){
            mp2[i]--;

        }
        for(char c: order){
            if(mp2[c]) mp2.erase(c);
            while(mp[c]){
                res+=c;
                mp[c]--;
                if(mp[c] == 0)
                mp.erase(c);
            }
        }
        for(auto i:mp2){
            while(i.second > 0){
                res+=i.first;
                i.second--;
            }
        }

        return res;
    }
};
