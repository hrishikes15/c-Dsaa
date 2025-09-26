class Solution {
public:
    int binarySearch(vector<int>& nums, int k, int n) {
        int low = 0;
        int high = n - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2; 
            if (nums[mid] < k) {              
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }

    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int k = nums[i] + nums[j];
                int idx = binarySearch(nums, k, n);
                if (idx > j) { 
                    count += (idx - j); 
                }
            }
        }
        return count;
    }
};
