class Solution {
public:
    int pivotInteger(int n) {
        int i=1,j=n,res=0;
        int sumL=i,sumR=n;
        while(i<=j){
            //cout<<sumL<<" "<<sumR<<"\n";
           if(sumL == sumR && i == j)
           return i;
           if(sumR > sumL)
               { i++;
                sumL+=i;
               }
            else
                 {j--;
                 sumR+=j;
                 }


        }
        return -1;
    }
};
