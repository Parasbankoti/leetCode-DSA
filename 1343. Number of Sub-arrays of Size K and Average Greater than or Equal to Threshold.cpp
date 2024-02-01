class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        unordered_map<int, int> mp;
        int res = 0, avg = 0;
        for (int i = 0; i < k; i++) {
            avg += arr[i];
        }
        if (avg / k >= threshold)
            res++;
        int left = 0;
        for (int i = k; i < arr.size(); i++) {
            avg += arr[i];
            avg -= arr[left++];
            if (avg / k >= threshold)
                res++;
        }
        return res;
    }
};
