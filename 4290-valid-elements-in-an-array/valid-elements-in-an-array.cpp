class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        vector<int>prefix(n);
        vector<int>suffix(n);

        prefix[0] = nums[0];
        for(int i = 1 ; i < n ; i++){
            prefix[i] = max(prefix[i-1],nums[i]);
        }

        suffix[n-1] = nums[n-1];
        for(int i = n-2 ; i >= 0 ; i--){
            suffix[i] = max(suffix[i+1],nums[i]);
        }


        for(int i = 0; i < n; i++){
            bool left = (i == 0) || (nums[i] > prefix[i-1]);
            bool right = (i == n-1) || (nums[i] > suffix[i+1]);

            if(left || right){
                ans.push_back(nums[i]);
            }
        }


        return ans;
    }
};