class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int res=1;
        stringstream ss(sentence);
        int sz=searchWord.size();
        string curr="";
        int ind=1;
        while(ss >> curr){
            int wordSz = curr.size();
            if(wordSz >= sz){
                string temp = curr.substr(0,sz);
                if(temp == searchWord) return ind;
            }
            ind++;
        }
        return -1;
    }
};
