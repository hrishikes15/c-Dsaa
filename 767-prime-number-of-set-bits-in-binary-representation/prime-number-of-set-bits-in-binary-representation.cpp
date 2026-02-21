class Solution {
    bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
public:
    int countPrimeSetBits(int left, int right) {
        int res = 0;
        for(int num = left ; num <= right ; num++){
            int cnt = __builtin_popcount(num);

            if(isPrime(cnt)) res++;
        }
        return res;
    }
};