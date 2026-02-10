class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;

        for(int i = 0 ; i < n ; i++){
            unordered_set<int>evens;
            unordered_set<int>odd;

            for(int j = i ; j < n ; j++){
                if(nums[j] % 2 == 0){
                    evens.insert(nums[j]);
                }
                else{
                    odd.insert(nums[j]);
                }
                if(evens.size() == odd.size()){
                maxi = max(maxi , j-i+1);
            }
            }
        }
        return maxi;
    }
};