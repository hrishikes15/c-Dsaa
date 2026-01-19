class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mapp;
        mapp[0] = 1;
        int preFix = 0 , cnt = 0;

        for(int i = 0 ; i < nums.size() ; i++){
            preFix += nums[i];
            int remove = preFix - k;
            cnt += mapp[remove];
            mapp[preFix]++;
        }
        return cnt;
    }
};