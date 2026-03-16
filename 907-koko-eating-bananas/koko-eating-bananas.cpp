class Solution {
    bool canFin(vector<int>& piles, int h, int mid) {
        long  hrs = 0;
        for (int x : piles) {
            hrs += (x + mid - 1) / mid;
        }

        return hrs <= h;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(), piles.end());
        int l = 1;
        int r = maxi;
        int ans = 0;

        while (l <= r) {
            int mid = (l + r) / 2;
            if (canFin(piles, h, mid)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};