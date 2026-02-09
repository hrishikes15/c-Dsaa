class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> prefix(nums.size());
        inclusive_scan(nums.begin(),nums.end(),prefix.begin());
        return prefix;
    }
};