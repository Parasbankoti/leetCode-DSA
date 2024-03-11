class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long count=0;
        priority_queue<int>pq;
        int n=happiness.size();
        for(int i:happiness)
            pq.push(i);
        long long res=0;
        while(k){
            long long temp = pq.top()-count;
            k--;
            count++;
            if(temp > 0)
                res+=temp;
            pq.pop();
        }
        return res;
    }
};
