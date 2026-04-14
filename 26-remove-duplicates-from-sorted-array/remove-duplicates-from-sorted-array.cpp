class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        int i = 0;
        int n = nums.size();

        while(j < n){
            if(nums[j] != nums[i]){
                nums[i+1] = nums[j];
                i++;
            }
            j++;
        }

        return i+1;

    }
};
