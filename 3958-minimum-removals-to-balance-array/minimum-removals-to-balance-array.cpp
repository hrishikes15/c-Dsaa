class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();

        sort(nums.begin(),nums.end());

        int i = 0 , j = 0;
        int L = 1;

        int maxEle = nums[i];
        int minEle = nums[j];

        while(j < n){
            minEle = nums[i];
            maxEle = nums[j];

            while(i < j && maxEle > (long long)k * minEle){
                i++;
                minEle = nums[i];
            }

            L = max(L , j-i+1);
            j++;
        }
        return n-L;
    }
};