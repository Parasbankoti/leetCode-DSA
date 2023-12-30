class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int res=0,beamtillnow=0,lastrowbeam=0;
        for(int i=0;i<bank.size();i++){
            beamtillnow=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j] == '1')
                    beamtillnow++;
            }
            if(beamtillnow==0)
                continue;
            else
                res+=beamtillnow*lastrowbeam;
        
            lastrowbeam=beamtillnow;
        }
        return res;
    }
};
