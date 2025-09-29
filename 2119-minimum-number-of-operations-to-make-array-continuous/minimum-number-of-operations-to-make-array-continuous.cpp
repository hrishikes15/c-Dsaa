class Solution {
public:
    int minOperations(vector<int>& nums) {
        int original_n = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0, j = 0;
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int n = nums.size();
        int maxLen = 0;

        while (i < n) {
            while (j < n && nums[j] - nums[i] < original_n) {
                j++;
            }
            maxLen = max(maxLen, (j - i));
            i++;
        }
        return original_n - maxLen;
    }
};