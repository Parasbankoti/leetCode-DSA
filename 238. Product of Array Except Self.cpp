class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>res;
        vector<int>left;
        vector<int>right;
        int n=nums.size();
        int curr=1;
        left.push_back(1);
        right.push_back(1);
        for(int i=0;i<n-1;i++){
            curr*=nums[i];
            left.push_back(curr);
        }
        curr=1;
        for(int i =n-1;i>0;i--){
            curr*=nums[i];
            right.push_back(curr);
        }
        reverse(right.begin(),right.end());
        for(int i=0;i<n;i++){
           res.push_back(left[i]*right[i]);
        }
        return res;
    }
};
