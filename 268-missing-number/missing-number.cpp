class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int s1 = reduce(begin(nums),end(nums));
        int s2 = n*(n+1)/2;
        return s2-s1;
    }
};