class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        if(n < 2) return -1;
        int ans = INT_MAX;

        for(int i = 0; i < n ;i++){

            for(int j = i+1 ; j < n ; j++){

                if(nums[i] == nums[j]){

                    for(int k = j+1 ; k < n ; k++){

                        if(nums[k] == nums[j]){
                            int sum = abs(i-j)+abs(j-k)+abs(i-k);
                            ans = min(ans ,sum);
                        }
                    }
                }
            }
        }

        return ans == INT_MAX ? -1 : ans;
        
    }
};