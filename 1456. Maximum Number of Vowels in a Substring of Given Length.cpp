class Solution {
public:
    bool isVowel(char ch){
       if(ch =='a' || ch =='u'|| ch =='o'|| ch =='e'|| ch =='i')
       return true;
       else return false;
    }

    int maxVowels(string s, int k) {
        int i=0,j=0,n=s.size();
        int res=0,count=0;
        while(j<=n){
            if(j-i < k){
                if(isVowel(s[j])){
                    count++;
                }
                j++;
            }
            else{
                res=max(res,count);
                if(isVowel(s[i]))
                count--;
                i++;
            }
        }
        return res;
    }
};
