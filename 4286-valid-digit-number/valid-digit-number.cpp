class Solution {
public:
    bool validDigit(int n, int x) {
        string s = to_string(n);
        int k = s.size();
        int cnt = 0;
        if (s[0] == (x + '0')) return false;
        for (int i = 1; i < k; i++) {
            if (s[i] == (x + '0')) {
                cnt++;
            }
        }

        return cnt >= 1;
    }
};