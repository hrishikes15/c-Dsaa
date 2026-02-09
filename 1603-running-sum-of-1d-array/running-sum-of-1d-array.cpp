class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> preFix(n);

        preFix[0] = nums[0];

        for(int i = 1 ; i < n ; i++){
            preFix[i] = preFix[i-1]+nums[i];
        }
        return preFix;
    }
};