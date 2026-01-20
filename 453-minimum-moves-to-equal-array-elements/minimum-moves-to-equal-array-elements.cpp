class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;

        for(int i = 0 ; i < n ; i++){
            mini = min(mini , nums[i]);
        }

        int ans = 0;
        for(int i = 0 ; i < n; i++){
            ans += nums[i] - mini;
        }
        return ans ;
    }
};