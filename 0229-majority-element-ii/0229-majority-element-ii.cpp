
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int min = nums.size() / 3 + 1;
        map<int, int> mp;
        vector<int> res;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;

            if (mp[nums[i]] == min) {
                res.push_back(nums[i]);
            }
        }

        return res;
    }
};
