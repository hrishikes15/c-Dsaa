class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi = INT_MIN;
        int n = nums.size();
        int j = n-1;
        int i = 0;

        while(i <= j){
            int sum = nums[i] + nums[j];
            maxi = max(maxi , sum);
            i++;j--;
        }
    return maxi;
    }
};