class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cons=0;
        int max_cons=0;
        for(int i=0;i<nums.size();i++)
        {                              
        if(nums[i]==1) cons++;
        else cons=0;
        if(cons>max_cons)max_cons=cons;
        }
        return max_cons;
    }
};