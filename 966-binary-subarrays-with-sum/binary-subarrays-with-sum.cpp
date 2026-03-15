class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int i = 0 , j = 0;
        int sum = 0; int cnt = 0;
        int zeros = 0;

        while(j < n){
            sum += nums[j];

            while(i < j && (sum > goal || nums[i] == 0)){
                if(nums[i] == 0){
                    zeros++;
                }
                else{
                    zeros = 0;
                }
                sum -= nums[i];
                i++;
            }


            if(sum == goal){
                cnt += 1 + zeros;
            }
            j++;
        }
        return cnt;
    }
};