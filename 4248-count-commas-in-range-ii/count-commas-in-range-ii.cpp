class Solution {
public:
    using ll =  long long ;
    long long  countCommas(long long n) {
        if(n < 999) return 0;
        ll ans = 0;

        vector<ll> vec{
            1000ll,
            1000000ll,
            1000000000LL,
            1000000000000LL,
            1000000000000000LL,
        };

        for(int i = 0 ; i < vec.size() ; i++){
            if(n >= vec[i])
                ans += n- vec[i]+1;
        
        }
        return ans;
    }
};