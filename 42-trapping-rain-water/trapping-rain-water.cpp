class Solution {
    vector<int>leftMax(vector<int>& nums ,int n){
        vector<int>lmax(n);
        lmax[0] = nums[0];
        for(int i = 1; i < n ; i++){
            lmax[i] = max(lmax[i-1],nums[i]);
        }
        return lmax;
    }
    vector<int>rightMax(vector<int>& nums ,int n){
        vector<int>rmax(n);
        rmax[n-1] = nums[n-1];
        for(int i = n-2; i >= 0 ; i--){
            rmax[i] = max(rmax[i+1],nums[i]);
        }
        return rmax;
    }
public:
    int trap(vector<int>& trap) {
        int n = trap.size();

        vector<int> lMax = leftMax(trap,n);
        vector<int> rMax = rightMax(trap,n);

        int ans = 0;
        for(int i = 0 ; i < n ;i++){
            int water = min(lMax[i],rMax[i])-trap[i];
            ans += water;
        }
        return ans;
    }
};