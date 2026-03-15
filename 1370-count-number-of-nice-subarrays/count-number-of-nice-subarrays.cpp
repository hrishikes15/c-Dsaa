class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i=0 , j=0;
        unordered_map<int,int>mapp;
        int n = nums.size();
        int sum = 0;
        int cnt = 0;
        mapp[0] = 1;

        for(int i = 0 ; i<n ; i++){
            sum += nums[i]%2;

            int rem = sum - k;
            if(mapp.find(rem) != mapp.end()){
                cnt+=mapp[rem];
            }
            mapp[sum]++;
        }
        return cnt;
    }
};