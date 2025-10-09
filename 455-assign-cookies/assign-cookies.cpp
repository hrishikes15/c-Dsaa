class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count = 0;
        int l = 0;
        int r = 0;

        int n = g.size();
        int m = s.size();
        while(r < n && l < m){
            if(g[r] <= s[l]){
                count++;
                l++;
                r++;
            }
            else{
                l++;
            }

        }
        return count;
    }
};