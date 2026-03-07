class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSubarr = nums[0];
        int maxi = nums[0];
        int n = nums.size();

        for(int i = 1; i < n ; i++){
            currSubarr = max(nums[i], currSubarr+nums[i]);
            maxi = max(maxi , currSubarr);
        }
        return maxi;
    }
};