class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int j=0;
        string str="",temp="";
        while(j < s.size()){
          if(s[j] == ' '){
              j++;
              continue;
          }
          else if(s[j] != ' '){
              temp="";
              while(j<s.size() &&  s[j]!=' '){
                  temp+=s[j];
                  j++;
              }
             
          }
           reverse(temp.begin(),temp.end());
              str+=temp+" ";
        }
        str.pop_back();
        return str;
    }
};
