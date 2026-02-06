class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int cnt = 0;

        for(int i = 1 ; i < n ; i++){
            if(nums[i] <= nums[i-1]){
                int needed = nums[i-1]+1;
                cnt += needed-nums[i];
                nums[i] = needed;
            }
        }
        return cnt;
    }
};