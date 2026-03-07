class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
         // find the red circle;

         int circle_idx = -1;

          for(int i = n-1 ; i > 0 ; i--){
            if(nums[i-1] < nums[i]){
                circle_idx = i-1;
                break;
            }
          }

          if(circle_idx != -1){
            int swap_idx = circle_idx;
            for(int j = n-1 ; j >=circle_idx+1 ; j--){
                if(nums[circle_idx] < nums[j]){
                    swap_idx = j;
                    break;
                }
            }
            swap(nums[circle_idx],nums[swap_idx]);
          }
          reverse(nums.begin()+circle_idx+1, nums.end());
    }
};