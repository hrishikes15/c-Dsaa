class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        if(nums[start] == target) return 0;
        
        int n = nums.size();
        int ans = INT_MAX;

        for(int i = 0 ; i < n ;i++){
            if(nums[i] == target){
                ans = min(ans , abs(i-start));
            }
        }
        return ans == INT_MAX ? -1 : ans ;
    }
};