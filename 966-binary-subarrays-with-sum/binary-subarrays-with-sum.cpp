class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mapp;
        mapp[0] = 1;
        int cnt = 0;
        int sum = 0;
        for(int i = 0; i < nums.size() ; i++){
            sum += nums[i];
            int rem = sum - goal;

            if(mapp.find(rem) != mapp.end()){
                cnt += mapp[rem];
            }
            mapp[sum]++;
        }
        return cnt;
    }
};