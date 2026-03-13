class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mapp;
        for(int i = 0 ; i < n ; i++){
           if(mapp.contains(nums[i])){
            if(abs(i - mapp[nums[i]] <= k)) return true;
           }
           mapp[nums[i]] = i;
        }
        return false;
    }
};