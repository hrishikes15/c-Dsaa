class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mapp;
        mapp[0] = 1;
        int n = nums.size();
        int sum = 0 , cnt = 0;
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];

            int rem = sum - k;

            if(mapp.find(rem) != mapp.end()){
                cnt += mapp[rem];
            }

            mapp[sum]++;
        }
        return cnt;
    }
};