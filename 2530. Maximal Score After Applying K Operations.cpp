class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long res = 0;
        priority_queue<int> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }
        while (k--) {
            int curr = pq.top();
            res += curr;
            pq.pop();
            curr % 3 == 0 ? pq.push(curr / 3) : pq.push(curr / 3 + 1);
        }
        return res;
    }
};
