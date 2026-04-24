class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l = 0, r = 0, b = 0;

        for (char c : moves) {
            if (c == 'L') l++;
            else if (c == 'R') r++;
            else b++;
        }

        return abs(l - r)+b;
    }
};