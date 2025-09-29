class Solution {
public:
    int minOperations(vector<int>& nums) {
        int original_n = nums.size();

        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        int n = nums.size();
        int i = 0, j = 0;
        int maxWindow = 0;

        while (i < n) {
            while (j < n && nums[j] - nums[i] < original_n) {     
                j++;
            }
            maxWindow = max(maxWindow, j - i  );
            i++;
        }

        return original_n - maxWindow;
    }
};
