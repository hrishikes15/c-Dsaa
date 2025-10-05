class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int leftSum = 0 , rightSum = 0 ;
        int maxi = 0;
        int n = nums.size();
        for(int i = 0 ; i < k ; i++){
            leftSum += nums[i];
        }
        maxi = leftSum ;
        int rightIdx = n-1;
        for(int i =  k-1 ; i >= 0 ; i--){
            leftSum -= nums[i];
            rightSum += nums[rightIdx];
            rightIdx -- ;
            maxi = max(maxi , (leftSum + rightSum));
        }
        
        return maxi;
    }
};