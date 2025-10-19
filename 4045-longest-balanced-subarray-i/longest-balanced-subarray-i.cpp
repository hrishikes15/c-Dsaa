class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;

        for(int i = 0 ; i < n ; i++){
            unordered_set<int> evenSet;
            unordered_set<int> oddSet;

            for(int j = i ; j < n ; j++){
                if( nums[j] % 2 == 0){
                    evenSet.insert(nums[j]);
                }
                else{
                    oddSet.insert(nums[j]);
                }

                if(evenSet.size() == oddSet.size()){
                    maxi = max(maxi , j-i+1);
                }
            }
        }
        return maxi;
    }
};