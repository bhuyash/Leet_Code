class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        //x=rep  y=miss
        long long sn=0,s2n=0;
        long long n=nums.size();
        long long SN=(n*(n+1))/2;
        long long S2N=(n*(n+1)*(2*n+1))/6;
        for(int i=0;i<n;i++)
        {
            sn+=nums[i];
            s2n+=(nums[i]*nums[i]);  
        }
        long long e1=sn-SN;
        long long e2=s2n-S2N;
        e2=e2/e1;
        long long rep=(e1+e2)/2;
        long long miss=e2-rep;
        vector<int> res;
        res.push_back(rep);
        res.push_back(miss);
        return res;

        
    }
};