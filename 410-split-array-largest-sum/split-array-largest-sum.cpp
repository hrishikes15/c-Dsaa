class Solution {
    bool canSplit(vector<int>&arr , int k , int mid){
        int sum = 0;
        int arrs = 1;
        for(int x : arr){
            if(sum+x <= mid){
                sum += x;
            }
            else{             
            
                arrs++;   
                sum = x;
            }
        }
        return arrs<=k;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        
        int l = *max_element(nums.begin(),nums.end());
        int r = accumulate(nums.begin(),nums.end(),0);
        int ans = 0;
        while(l <= r){
            int mid = (l+r)/2;
            
            if(canSplit(nums, k , mid)){
                ans = mid;
                r = mid-1;
            }
            else{
                l=  mid+1;
            }
        }
        return ans;
    } 
};