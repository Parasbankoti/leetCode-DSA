class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        vector<int>v;
        int ind=0;
        v.push_back(INT_MIN);
        for(int i=0;i<nums.size();i++)
            v.push_back(nums[i]);
        v.push_back(INT_MIN);
        for(int i=1;i<v.size();i++)
        {
            if(v[i]>v[i-1] && v[i]>v[i+1]){
                ind=i-1;
                break;
            }
        }
        return ind;
    }
};
