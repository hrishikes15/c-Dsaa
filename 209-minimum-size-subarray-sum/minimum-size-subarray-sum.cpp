class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        int sum = 0;
        int i = 0 , j = 0;

        while(j < n){
            sum += nums[j];

            while(target <= sum){
                mini = min(mini , j-i+1);
                sum -= nums[i];
                i++;
            }
            j++;
        }
        if(mini == INT_MAX) return 0;
        return mini;
    }
};