class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mapp;
        mapp[0] = 1;
        int currSum = 0 , cnt = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            currSum += nums[i];
            int rem = currSum - k;

            if(mapp.find(rem) != mapp.end()){
                cnt += mapp[rem];
            }
            // cnt += mapp[rem];
            mapp[currSum]++;
        }
        return cnt;
    }
};
