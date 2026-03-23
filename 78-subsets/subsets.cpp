class Solution {
    void solve(int index, vector<int>& nums, vector<int>& op, vector<vector<int>>& ans) {
        if(index == nums.size()) {
            ans.push_back(op);
            return;
        }

        // include
        op.push_back(nums[index]);
        solve(index + 1, nums, op, ans);

        // backtrack
        op.pop_back();

        // exclude
        solve(index + 1, nums, op, ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> op;
        solve(0, nums, op, ans);
        return ans;
    }
};