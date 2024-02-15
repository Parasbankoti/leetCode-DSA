class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        long long res=0,currSum=0;
        priority_queue<int>pq;
        for(int i:nums){
            currSum+=i;
            pq.push(i);
        }
        while(!pq.empty()){
            int temp = pq.top();
            if(temp < currSum-temp)
            return currSum;
            pq.pop();

            currSum-=temp;

        }
        return -1;

    }
};
