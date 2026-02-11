class Solution {
public:
    int maximumCount(vector<int>& nums) {

        auto lambdaP = [&](int x){
            return x > 0;
        };
        auto lambdaN = [&](int x){
            return x < 0;
        };

        int pos = count_if(nums.begin() , nums.end() , lambdaP);
        int neg = count_if(nums.begin() , nums.end() , lambdaN);

        return pos > neg ? pos : neg;
    }
};