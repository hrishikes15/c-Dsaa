class Solution {
public:
    int minPartitions(string s) {
        int maxi = 0;

        for(char c : s){
            maxi = max(maxi, c - '0');
        }
        return maxi;
    }
};
