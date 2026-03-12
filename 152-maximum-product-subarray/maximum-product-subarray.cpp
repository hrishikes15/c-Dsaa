class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            int pr = 1;
            for(int j = i ; j < n ; j++){
                pr *= nums[j];
                maxi = max(maxi , pr);
            }
        }
       return  maxi;
    }
};