class Solution {
    bool canSplit(vector<int>&piles , int h , int mid){
        long long s = 0;
        for(int &x : piles){
            s += ceil((double)x/mid);
        }
        return s <= h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(),piles.end());
        int l = 1;
        int r = maxi;
        int ans = 0;

        while(l <= r){
            int mid = l + (r-l)/2;

            if(canSplit(piles,h,mid)){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
};