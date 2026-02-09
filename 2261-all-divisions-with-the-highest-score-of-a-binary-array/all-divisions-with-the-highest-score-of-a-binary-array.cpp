class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        int ones = 0;
        for(int x : nums){
            if(x == 1) ones++;
        }
        int zeros = 0;
        int maxSum = ones;
        ans.push_back(0);

        for(int i = 0 ; i < n ; i++){
            if(nums[i] == 0) zeros++;
            else ones--;

            int sum = zeros+ones;

            if(sum > maxSum){
                maxSum = sum;
                ans.clear();
                ans.push_back(i+1);
            }
            else if(sum == maxSum){
                ans.push_back(i+1);
            }

        }
        return ans;

    }
};