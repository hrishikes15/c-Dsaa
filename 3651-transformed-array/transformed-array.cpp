class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);

        for (int i = 0; i < n; i++) {
            int shift = nums[i] % n;

            int newIdx = (i + shift) % n;

            if (newIdx < 0)
                newIdx += n;

            ans[i] = nums[newIdx];
        }
        return ans;
    }
};