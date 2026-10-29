class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>res;
        int ind =0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                res.push_back(nums[ind]);
                ind++;
            }
            else
            {
                res.push_back(nums[n]);
                n++;

            }
        }
        return res;
    }
};