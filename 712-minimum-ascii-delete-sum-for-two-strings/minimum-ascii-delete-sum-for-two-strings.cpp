class Solution {
    int lcs(string s1 , string s2 , int m , int n){
        vector<vector<int>> dp(m+1 , vector<int>(n+1 , 0));

        for(int i = 1 ; i <= m ; i++){
            for(int j = 1 ; j <= n ; j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] =  dp[i-1][j-1] + s1[i-1];
                }
                else {
                    dp[i][j] = max(dp[i][j-1] , dp[i-1][j]);
                }
            }
        }
        return dp[m][n];
    }
public:
    int minimumDeleteSum(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();

        int lcsAsci = lcs(s1,s2,m,n);

        int sum1 = 0 , sum2 = 0;
        for(char c : s1) sum1 += c;
        for(char c : s2) sum2 += c;

        return sum1+sum2 - 2*lcsAsci;
    }
};