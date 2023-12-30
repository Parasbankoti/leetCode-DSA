class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,j=0,count=0;
        while(i<chars.size()){
          count=0;
          char curr = chars[i];
          while(i<chars.size() && curr == chars[i]){
              count++;
              i++;
          }
          chars[j] = curr;
          j++;

          if(count>1){
              string str = to_string(count);
              for(auto l:str){
                  chars[j] = l;
                  j++;
              }
          }


        }
        return j;
    }
};
