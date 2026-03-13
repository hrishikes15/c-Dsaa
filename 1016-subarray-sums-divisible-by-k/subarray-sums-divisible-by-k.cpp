class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mapp;
        int currSum = 0;
        int cnt = 0;
        mapp[0] = 1;

        for(int i = 0 ; i < nums.size() ; i++){
            currSum += nums[i];

            int rem = currSum % k;

            if(rem < 0) rem += k;

            cnt += mapp[rem];

            mapp[rem]++;

        }
        return cnt;
    }
};