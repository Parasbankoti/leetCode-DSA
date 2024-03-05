class Solution {
public:
    int minimumLength(string s) {
        int l=0,r=s.size()-1;
        while(l<r && s[l] == s[r]){
            char ch=s[l];
            while(ch == s[l] && l<=r){
                l++;
            }
            while(ch == s[r] && l<=r)
            r--;
        }
        return r-l+1;
    }
};

====================================================
  class Solution {
public:
    int minimumLength(string s) {
        int count=0,n=s.size();
        set<char>st;
        for(auto i:s){
            st.insert(i);
        }
        if(st.size()==1 && n>1) return 0;
        int l=0,r=n-1;
        int flag=0;
      //  cout<<n<<"\n";
        while(l<r){
            if(s[l] == s[r]){
                int tempL=l,tempR=r;
                while(l < r && s[tempL] == s[r]){
                    tempL++;
                    count++;

                }
                while(l < r && s[l]==s[tempR]){
                    tempR--;
                    flag=1;
                    count++;
                }
                l=tempL;
                r=tempR;
               // cout<<count<<" ";
            }
            else{
                break;
            }
        }
        int res=n-count;
      //  cout<<res;
        return res>0 ? res : 0;
    }
};
