class Solution {
public:
    bool isPalindrome(int x) {
        long long num=x,rem=0,res=0;
            if(x<0)
            return false;
        while(x)
        {
            rem=x%10;
            res=res*10+rem;
            x=x/10;
        }
        if(num==res)
            return true;
        return false;
    }
};
