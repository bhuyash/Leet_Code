class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> res(nums.size());
        for (int i =0;i<nums.size();i++)
        {
            if(nums[i]>0) pos.push_back(nums[i]);
            if(nums[i]<0) neg.push_back(nums[i]);
        }
        int pc=0;
        int nc=0;
        for (int i =0;i<nums.size();i++)
        {
            if(i%2==0) 
            {
                res[i]=pos[pc];
                pc++;
            }
            else
            {
                res[i]=neg[nc];
                nc++;
            }
        }
        return res;
        
    }
};