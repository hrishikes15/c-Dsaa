class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int i = 0 , j = 0 ;
        int n = nums.size();
        int currSum = 0 , maxSum = 0 ;
        unordered_map<int,int> mapp;
        while( j < n ){
            mapp[nums[j]]++;
            currSum += nums[j];

            while(mapp[nums[j]] > 1){
                mapp[nums[i]]--;
                currSum -= nums[i];
                if(mapp[nums[i]] == 0 ){
                    mapp.erase(nums[i]);
                }
                i++;
            }
            maxSum = max(maxSum,currSum);
            j++;
        }
        
        return maxSum;
    }
};