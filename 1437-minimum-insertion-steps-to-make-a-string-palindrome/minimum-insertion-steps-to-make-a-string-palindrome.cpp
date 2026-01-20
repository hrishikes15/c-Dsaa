class Solution {
    int lcs(string s1 , string s2 , int m , int n){
        vector<vector<int>> dp(m+1 , vector<int>(n+1 , 0));

        for(int i = 1 ; i <= m ; i++){
            for(int j = 1 ; j <= n ; j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else {
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
public:
    int minInsertions(string s) {
        string b = s;
        int m = s.size();
        reverse(b.begin(),b.end());

        int len = lcs(s,b,m ,m);

        return m - len;
    }
};