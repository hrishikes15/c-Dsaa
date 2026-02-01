class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int first = nums[0];
        int n = nums.size();

        int m1 = INT_MAX  , m2 = INT_MAX;
        for(int i = 1 ; i < n ; i++){
            if(nums[i] < m1){
                m2 = m1;
                m1 = nums[i];
            }
            else if(nums[i] < m2){
                m2 = nums[i];
            }
            }
        

        return first + m1 + m2;

    }
};