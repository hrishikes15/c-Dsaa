class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int> mapp;

        for(int i = 0 ; i < n ; i++){
            int rem = target - nums[i];

            if(mapp.find(rem) != mapp.end()){
                return {mapp[rem] , i};
            }
            mapp[nums[i]] = i;
        }
        return {};
    }
};