class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        int flag=0;
        string res="";
        int start=0,end=INT_MAX;
        int count = mp.size();
        int j=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]--;
            if(mp[s[i]] == 0){
                count--;
            }
            while(count == 0){
                if(i-j <  end-start){
                    start=j;
                    end=i;
                    flag=1;
                    
                }
                mp[s[j]]++;
                if(mp[s[j]] > 0 ) count++;
                j++;
            }

        }
        if(flag==1)
        res=s.substr(start,end-start+1);

  //  if(start == INT_MIN) return "";
    return res;

    }
};
