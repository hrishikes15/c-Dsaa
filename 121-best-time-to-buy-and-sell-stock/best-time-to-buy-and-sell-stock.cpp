class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxPro = 0;
        int mini = INT_MAX;

        for(int i = 0 ; i < n ; i++){
            mini = min(mini , prices[i]);
            maxPro = max(maxPro , prices[i]-mini);
        }
        return maxPro;
    }
};