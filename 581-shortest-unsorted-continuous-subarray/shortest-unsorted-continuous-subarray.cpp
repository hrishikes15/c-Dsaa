class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       int left = -1;
       int right = -1;
       int n = nums.size();

        int maxSeen = nums[0];
       for(int i = 1; i  < nums.size() ; i++){
        if(nums[i] < maxSeen){
            right = i;
        }
        else{
            maxSeen = nums[i];
        }
       }
       int minSeen = nums[n-1];
       for(int i = n-2 ; i >= 0 ; i--){
        if(nums[i] > minSeen){
            left = i;
        }
        else{
            minSeen = nums[i];
        }
       }
       if(left == -1) return 0;
       return right-left+1;
    }
};