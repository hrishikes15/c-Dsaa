class Solution {
    int index(vector<int> nums){
        int index = -1;
        int mini = INT_MAX;
        int n = nums.size();
        for(int i = 0 ; i < n-1 ; i++){
            if(nums[i] + nums [i+1] < mini){
                index = i;
                mini = nums[i] + nums[i+1];
            }
        }
        return index;
    }
public:
    int minimumPairRemoval(vector<int>& nums) {
        int cnt = 0;

        while(!is_sorted(nums.begin(),nums.end())){
            int idx = index(nums);

            nums[idx] = nums[idx] + nums[idx+1];
            nums.erase(nums.begin() + idx +1);

            cnt++;
        }
        return cnt;
    }
};