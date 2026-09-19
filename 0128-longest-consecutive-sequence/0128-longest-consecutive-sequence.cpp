class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int longest=1;
        unordered_set<int> us;
        for(int i=0;i<nums.size();i++)
        {
            us.insert(nums[i]);
        }
        for(auto it:us)
        {
            if(us.find(it-1)==us.end())
            {
            int c=1;
            int x=it;
            while(us.find(x+1)!=us.end())
            {
                x=x+1;
                c=c+1;
            }
            if(c>longest)longest=c;
            }
        }
        return longest;
    }
};