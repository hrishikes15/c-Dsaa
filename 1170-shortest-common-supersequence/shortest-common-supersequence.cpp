class Solution {
    vector<vector<int>> lcs(string s1, string s2, int m, int n) {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp;
    }

    string print(vector<vector<int>> &dp, string s1, string s2, int m, int n) {
        int i = m, j = n;
        string s = "";

        while (i > 0 && j > 0) {
            if (s1[i - 1] == s2[j - 1]) {
                s.push_back(s1[i - 1]);
                i--; j--;
            }
            else if (dp[i - 1][j] > dp[i][j - 1]) {
                s.push_back(s1[i - 1]);  
                i--;
            }
            else {
                s.push_back(s2[j - 1]); 
                j--;
            }
        }

        
        while (i > 0) {
            s.push_back(s1[i - 1]);
            i--;
        }
        while (j > 0) {
            s.push_back(s2[j - 1]);
            j--;
        }

        reverse(s.begin(), s.end());
        return s;
    }

public:
    string shortestCommonSupersequence(string str1, string str2) {
        int m = str1.size();
        int n = str2.size();
        vector<vector<int>> table = lcs(str1, str2, m, n);
        return print(table, str1, str2, m, n);
    }
};
