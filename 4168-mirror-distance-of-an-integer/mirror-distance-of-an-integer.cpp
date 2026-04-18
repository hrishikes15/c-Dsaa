class Solution {
public:
    int mirrorDistance(int n) {
        string str = to_string(n);
        if(str.size() < 2) return 0;

        reverse(str.begin(),str.end());
        int m = stoi(str);

        return abs(n-m);
    }
};