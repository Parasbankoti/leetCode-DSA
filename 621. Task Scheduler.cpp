class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int res=0;
        unordered_map<char,int>mp;
        int maxi=0;
        char maxChar;
        for(auto i:tasks){
            mp[i]++;
            if(maxi < mp[i]){
                maxi=mp[i];
                maxChar = i;
            }
        }
        int spaces = n*(maxi-1);
        int curr=spaces+maxi;
        // cout<<curr<<" "<<maxi;

        for(auto i:mp){
            if(i.first == maxChar){
                continue;
            }
            else if(i.second == maxi){
                curr+=1;
                spaces+=1;
            }
            spaces-=i.second;
        }
        if(spaces < 0){
            return curr+abs(spaces);
        }
        return curr;


    }
};
