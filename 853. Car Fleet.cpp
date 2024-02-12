class Solution {
typedef pair<int,int> p;
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        float res=0;
        priority_queue<p,vector<p>,greater<p>>pq;
        for(int i=0;i<speed.size();i++){
            pq.push({position[i],speed[i]});
        }
        stack<float>st;
         while(!pq.empty())
           { 
               float curr = target-pq.top().first;
            float temp = (float)(curr/(pq.top().second));
            
            // if(temp == 0) dis.push_back(1);
            st.push(temp);
            pq.pop();
            }
        float topper = st.top();
        res++;
        st.pop();
        while(!st.empty()){
            cout<<st.top()<<" "<<topper<<"\n";
            if(st.top() <= topper){
                st.pop();
            }
            else{
                topper= st.top();
                st.pop();
                res++;
            }
        }
        return res;
    }
};
