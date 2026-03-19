class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = 0;
        int cnt = 0;
        int n = nums.size();

        for(int i = 0 ;i < n ; i++){
            if(cnt == 0){
                ele = nums[i];
                cnt++;
            }
            else if(ele == nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt2 = 0;
        for(int i = 0 ; i < n ; i++){
            if(ele == nums[i]){
                cnt2++;
            }
        }
        if(cnt2 > n/2) return ele;
        return -1;
    }
};