class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int firstPos = lower_bound(nums.begin(),nums.end(),1) - nums.begin();
        firstPos = nums.size() - firstPos;
        int firstZero = lower_bound(nums.begin() , nums.end() , 0) - nums.begin();
        return max(firstPos , firstZero);
    }
};