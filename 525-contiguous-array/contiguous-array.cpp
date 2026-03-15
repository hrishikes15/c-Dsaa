class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mapp;
        mapp[0] = -1;
        int sum = 0;
        int n = nums.size();
        int maxi = 0;

        for(int i = 0 ; i < n ; i++){
            if(nums[i] == 0){
                sum -= 1;
            }
            else{
                sum += 1;
            }
            if(mapp.find(sum) != mapp.end()){
                maxi = max(maxi , i - mapp[sum]);
            }
            else
            {
                mapp[sum] = i;
            }
        } 
        return maxi;
    }
};