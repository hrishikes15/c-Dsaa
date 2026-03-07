class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int first_pos = lower_bound(nums.begin(),nums.end(),1) - nums.begin() ;
        int first_0 = lower_bound(nums.begin(),nums.end(),0) - nums.begin();
        
        first_pos = nums.size() - first_pos;
        return max(first_pos,first_0);
        }
};