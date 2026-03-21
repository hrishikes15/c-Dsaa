class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ele1 = 0;
        int ele2 = 0;
        int c1 = 0 , c2 = 0;
        int n = nums.size();
        vector<int>ans;

        for(int i = 0 ; i < n ; i++){
            if(nums[i] == ele1){
                c1++;
            }
            else if(nums[i] == ele2){
                c2++;
            }
            else if(c1 == 0){
                c1++;
                ele1 = nums[i];
            }
            else if(c2 == 0){
                 c2++;
                ele2 = nums[i];
            }
            else{
                c1--;c2--;
            }
        }

        int cnt1=0 , cnt2=0;
        for(int i = 0 ; i < n ;i++){
            if(nums[i] == ele1)cnt1++;
            else if(nums[i] == ele2)cnt2++;
        }

        
       if(cnt1 > n/3) ans.push_back(ele1);
       if(cnt2 > n/3) ans.push_back(ele2);
        return ans;
    }
};