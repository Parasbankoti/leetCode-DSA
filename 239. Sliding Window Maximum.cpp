class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> dq;
        int left = 0;
        for (int i = 0; i < nums.size(); i++) {
            while (!dq.empty() && nums[i] > nums[dq.back()]) {
                dq.pop_back();
            }
            dq.push_back(i);
            if (i - left + 1 == k) {
                res.push_back(nums[dq.front()]);
                if (left == dq.front())
                    dq.pop_front();
                left++;
            }
        }
        return res;
    }
};
