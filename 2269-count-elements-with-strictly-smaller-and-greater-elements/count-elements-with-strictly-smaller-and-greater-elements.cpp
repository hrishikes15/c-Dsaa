class Solution {
public:
    int countElements(vector<int>& nums) {
        int n = nums.size();

        if(n < 3) return 0;
        sort(nums.begin(),nums.end());

        int i = 0 , j = n-1;

        while(i < n && nums[i] == nums[0]) i++;
        while(j >=0 && nums[j] == nums[n-1]) j--;

        if(i > j) return 0;
        return j-i+1;
    }
};