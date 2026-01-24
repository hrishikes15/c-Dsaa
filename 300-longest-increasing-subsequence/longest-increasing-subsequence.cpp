class Solution {
    int lcs(vector<int> arr1 , vector<int> arr2 , int m , int n){
        vector<vector<int>> dp(m+1 , vector<int>(n+1 , 0));

        for(int i = 1 ; i <=m ; i++){
            for(int j = 1 ; j <= n ; j++){
                if(arr1[i-1] == arr2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> arr2 = nums;

        sort(arr2.begin(),arr2.end());
        auto it = std::unique(arr2.begin(), arr2.end());
        arr2.erase(it, arr2.end());

        return lcs(nums , arr2 ,nums.size() , arr2.size());
    }
};