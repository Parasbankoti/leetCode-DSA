class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>res;
        string str="";
        for(int i=0;i<nums.size();i++){
            str="";
            str+=to_string(nums[i]);
            int flag=0;
            while(i+1!=nums.size() && nums[i] == nums[i+1]-1){
                i++;
                flag=1;
            }
            if(flag==1)
            {
                str+="->" + to_string(nums[i]);
            }
            res.push_back(str);

        }
      //  cout<<str;
        return res;
        
    }
};
