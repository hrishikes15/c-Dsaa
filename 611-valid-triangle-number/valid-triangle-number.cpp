class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        if( n < 3 ) return 0;
        sort(nums.begin(),nums.end());
        int count = 0 ;
        for(int k = n-1 ; k >=2 ; k--){
            int low = 0 , high = k-1;
            while( low <= high){
                if( nums[low] + nums[high] > nums[k]){
                    count += ( high - low );
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