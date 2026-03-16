class Solution {
    int upperBound(vector<int>& nums , int target){
        int n = nums.size();
        int l = 0;
        int r = n-1;
        int ans = n;

        while(l <= r){
            int mid = (l+r)/2;
            if(nums[mid] >= target){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
        
    }
    int lowerBound(vector<int>& nums , int target){
        int n = nums.size();
        int l = 0;
        int r = n-1;
        int ans = n;

        while(l <= r){
            int mid = (l+r)/2;
            if(nums[mid] > target){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
        
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = upperBound(nums,target);
        int ub = lowerBound(nums,target);

        if(lb == nums.size()||nums[lb] != target) return {-1,-1};
 
        return {lb,ub-1};
    }
};