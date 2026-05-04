class Solution {
    bool isPrime(int n){
    if(n <= 1) return false;

    for(int i = 2 ; i * i <= n ; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
public:
    int sumOfPrimesInRange(int n) {
        string s = to_string(n);
        reverse(s.begin(),s.end());

        int m = stoi(s);

        int k = max(m,n);
        int l = min(m,n);

        int sum = 0 ;
        for(int i = l ; i <= k ; i++){
            if(isPrime(i)){
                sum += i;
            }
        }

        return sum;

    }
};