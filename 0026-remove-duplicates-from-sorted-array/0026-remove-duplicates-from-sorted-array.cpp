class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp=0;
        if(nums.size()==1) return 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[temp])continue;
            nums[temp+1]=nums[i];
            temp++;
            
        }
        if(temp==0) return 1;
        return temp+1;
        
    }
};