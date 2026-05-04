class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();

        for(int i =0 ; i < n ; i++){
            int cnt = 0;
            for(int j = i+1 ; j < n ; j++){
                if(nums[i] % 2 == 0){
                    if(nums[j] % 2 != 0){
                        cnt++;
                    }
                }
                else if(nums[i]%2 != 0){
                    if(nums[j] % 2 == 0){
                        cnt++;
                    }
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};