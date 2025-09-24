
class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int n = nums.size();
        if (n < k) return {};
        vector<int> ans(n - k + 1, 0);
        vector<int> counter(50, 0); // track negatives [-50..-1] mapped to [0..49]

        for (int i = 0; i < n; ++i) {
            if (nums[i] < 0) ++counter[nums[i] + 50];
            if (i - k >= 0 && nums[i - k] < 0) --counter[nums[i - k] + 50];

            if (i - k + 1 < 0) continue; // window not full yet

            int cnt = 0, val = 0;
            for (int j = 0; j < 50; ++j) {
                cnt += counter[j];
                if (cnt >= x) { val = j - 50; break; }
            }
            ans[i - k + 1] = val; // val is 0 if x-th negative not found
        }
        return ans;
    }
};
