class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            int cs = 0;
            for(int j = i ; j < n ; j++){
                cs += nums[j];
                if(cs == k) cnt++;
            }
            
        }
        return cnt;
    }
};