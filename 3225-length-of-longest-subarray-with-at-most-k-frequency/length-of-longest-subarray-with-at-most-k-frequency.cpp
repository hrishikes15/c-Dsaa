class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mapp;
        int maxi = INT_MIN;
       int l = 0;
       int n = nums.size();

       for(int r = 0 ; r < n; r++){
        mapp[nums[r]]++;

        while(mapp[nums[r]] > k){
            mapp[nums[l]]--;
            l++;
        }
        maxi = max(maxi,r-l+1);
       }
       return maxi;
        
    }
};