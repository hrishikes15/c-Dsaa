class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       int n = nums.size();
       unordered_map<int,int>mapp;
       mapp[0] = -1;
       int currSum = 0;
       for(int i=0 ; i < n ;i++){
        currSum += nums[i];
        int rem = currSum % k;
        if(mapp.find(rem) != mapp.end()){
            if(i - mapp[rem] >= 2) return true;
        }
       else{
        mapp[rem] = i;
       }
       }
       return false;
    }
};