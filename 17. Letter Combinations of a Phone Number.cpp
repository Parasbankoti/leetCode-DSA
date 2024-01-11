class Solution {
public:

    void check(int ind,vector<string>&res,string digits,string temp, unordered_map<char,string>mp){
        
        if(ind == digits.size()){
            res.push_back(temp);
            return;
        }

        char ch = digits[ind];
        string str = mp[ch];

        for(int i=0;i<str.size();i++){
            temp.push_back(str[i]);
            check(ind+1,res,digits,temp,mp);
            temp.pop_back();
        }
    }


    vector<string> letterCombinations(string digits) {
        if(digits == "")
            return {};
        vector<string>res;
        string temp="";
         unordered_map<char,string>mp;
    mp['2'] = "abc";
    mp['3'] = "def";
    mp['4'] = "ghi";
    mp['5'] = "jkl";
    mp['6'] = "mno";
    mp['7'] = "pqrs";
    mp['8'] = "tuv";
    mp['9'] = "wxyz";
        check(0,res,digits,temp,mp);
        return res;
    }
};
