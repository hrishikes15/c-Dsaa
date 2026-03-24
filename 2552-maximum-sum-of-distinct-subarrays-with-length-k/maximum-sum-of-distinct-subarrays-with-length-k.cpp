class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
    unordered_map<int,int>mapp;
    int l = 0 , r = 0;
    long long sum = 0 , maxi = 0;
    int n = nums.size();

    while(r < n){
        sum += nums[r];
        mapp[nums[r]]++;
        
        while(r - l + 1 > k || mapp.size() < (r - l + 1)){
                sum -= nums[l];
                mapp[nums[l]]--;
                if(mapp[nums[l]] == 0){
                    mapp.erase(nums[l]);
                }
                l++;
            }
            if(r-l+1 == k){
            maxi = max(maxi,sum);
        }
        r++;
    }
    return maxi;
    }
};