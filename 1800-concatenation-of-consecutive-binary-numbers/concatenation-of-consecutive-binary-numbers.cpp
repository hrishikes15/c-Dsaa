class Solution {
    int M = 1e9+7;
public:
    int concatenatedBinary(int n) {
        long result =0;
        for(int i = 1 ; i <= n; i++){
            int digits = log2(i) + 1;
            result = ((result << digits) + i) % M;
        }
        return result;
    }
};