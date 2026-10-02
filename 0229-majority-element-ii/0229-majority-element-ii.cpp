class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])==mp.end())
            {
                mp[nums[i]]=1;
            }
            else mp[nums[i]]++;
        }
        for(auto it : mp)
        {
            if (it.second>nums.size()/3) res.push_back(it.first);
        }
        return res;
    }
};