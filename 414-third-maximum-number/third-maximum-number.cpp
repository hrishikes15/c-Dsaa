class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> uniq(nums.begin(), nums.end());
        vector<int> sorted(uniq.begin(), uniq.end());
        sort(sorted.begin(), sorted.end(), greater<int> ());
        if(sorted.size() >= 3)
            return sorted[2];
        return sorted[0];
    }
};