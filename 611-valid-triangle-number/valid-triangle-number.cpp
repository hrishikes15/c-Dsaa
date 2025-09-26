class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());  
        int n = nums.size();
        int count = 0 ;
        for(int k = n-1 ; k >=2 ; k--){
            int low = 0 ;
            int high = k-1;
            while(low < high){
                if(nums[low] + nums[high] > nums[k]){
                    count += high - low ;
                    high--;
                }
                else{
                    low++;
                }
            }

            
        }
        return count;
    }
};