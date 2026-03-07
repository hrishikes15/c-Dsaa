class Solution {
    int solve(vector<vector<int>> &nums){
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        ans.push_back(nums[0]);

        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i][0] < ans.back()[1]){
                ans.back()[1] = max(ans.back()[1] , nums[i][1]);
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        return ans.size();
    }
public:
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        vector<vector<int>> x;
        vector<vector<int>> y;

        for(int i = 0 ; i < rectangles.size() ; i++){
            x.push_back({rectangles[i][0] , rectangles[i][2]});
            y.push_back({rectangles[i][1] , rectangles[i][3]});
        }
        int xSize = solve(x);
        int ySize = solve(y);

       return xSize >= 3 || ySize >= 3;
    }
};