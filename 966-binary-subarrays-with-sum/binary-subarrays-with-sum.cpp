class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return func(nums, goal) - func(nums, goal - 1);
    }

    int func(vector<int>& nums, int goal) {
        if (goal < 0) return 0;

        int count = 0;
        int i = 0, j = 0;
        int n = nums.size();
        int sum = 0;

        while (j < n) {
            sum += nums[j];

            while (i <= j && sum > goal) {
                sum -= nums[i];
                i++;
            }

            count += (j - i + 1);

            j++;
        }

        return count;
    }
};
