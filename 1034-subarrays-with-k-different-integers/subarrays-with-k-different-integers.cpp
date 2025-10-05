class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return func(nums, k) - func(nums, k - 1);
    }

    int func(vector<int>& nums, int k) {
        int count = 0;
        int i = 0, j = 0;
        int n = nums.size();
        unordered_map<int, int> mapp;

        while (j < n) {
            mapp[nums[j]]++;

        
            while (mapp.size() > k) {
                mapp[nums[i]]--;
                if (mapp[nums[i]] == 0) {
                    mapp.erase(nums[i]);
                }
                i++;
            }

            count += (j - i + 1);
            j++;
        }

        return count;
    }
};
