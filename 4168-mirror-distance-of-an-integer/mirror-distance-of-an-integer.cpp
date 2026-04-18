class Solution {
public:
    int mirrorDistance(int n) {
        // string s = to_string(n);
        // reverse(s.begin(),s.end());
        // int ans = stoi(s);
        // return abs(n-ans);

        int nums = n;
        int rev = 0;
        while(n>0) {
            int temp = n%10;
            rev = rev*10+temp;
            n/=10;
        }
        
        return abs(nums-rev);
    }
};