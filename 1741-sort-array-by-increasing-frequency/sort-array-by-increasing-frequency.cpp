class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mapp;
        for (int num : nums) {
            mapp[num]++;
        }

        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (mapp[a] == mapp[b])
                return a > b;
            return mapp[a] < mapp[b]; 
        });

        return nums;
    }
};
