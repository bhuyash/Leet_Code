class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0,c2=0,el1,el2;
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            if(c1==0 && nums[i]!=el2)
            {
                c1=1;
                el1=nums[i];
            }
            else if(c2==0 && nums[i]!=el1)
            {
                c2=1;
                el2=nums[i];
            }
            else if(nums[i]==el1) c1++;
            else if(nums[i]==el2) c2++;
            else
            {
                c1--;
                c2--;
            }
        }
        c1=0;
        c2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==el1) c1++;
        }
        if(c1>(nums.size()/3)) res.push_back(el1);

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==el2) c2++;
        }
        if(c2>(nums.size()/3)) res.push_back(el2);
        
        return res;
        
    }
};