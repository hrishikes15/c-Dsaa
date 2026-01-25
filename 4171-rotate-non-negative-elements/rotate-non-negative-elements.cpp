class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> temp;
        int n = nums.size();

        for(int  i = 0 ; i < n ; i++){
            if(nums[i] >= 0){
                temp.push_back(nums[i]);
            }
        }
        
        if(temp.size() == 0) return nums;
        
        k =k % temp.size() ;
        
        reverse(temp.begin()  , temp.begin()+k);
        reverse(temp.begin() + k , temp.end());
        reverse(temp.begin(),temp.end());

        int idx = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] >= 0){
                nums[i] = temp[idx++];
            }
        }
        return nums;
    }
};