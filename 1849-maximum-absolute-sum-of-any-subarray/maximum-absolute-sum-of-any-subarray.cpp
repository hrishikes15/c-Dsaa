//dont ignore negatives
// maxSuarray  --> res(abs(both))
// minSubarray -->res = abs(both)

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {

        int currSub = nums[0];
        int maxi = nums[0];

        int n = nums.size();

        for(int i = 1 ; i < n ; i++){
            currSub = max(nums[i] , currSub+nums[i]);
            maxi = max(currSub , maxi);
        }

        int currSub2 = nums[0];
        int mini = nums[0];
        for(int i = 1 ; i < n ; i++){
            currSub2 = min(nums[i] , currSub2 + nums[i]);
            mini = min(currSub2 , mini);
        }
        return max(abs(maxi),abs(mini));
    }
};