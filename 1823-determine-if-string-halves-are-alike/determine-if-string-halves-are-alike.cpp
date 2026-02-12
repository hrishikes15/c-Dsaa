class Solution {
    bool isVowel(char &ch){
       return string("aeiouAEIOU").find(ch) != string :: npos;
    }
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        int mid = n/2;

        int i = 0 , j = mid;
        int l = 0 , r = 0;

        while(i < mid && j < n){
            if(isVowel(s[i])) l++;
            if(isVowel(s[j])) r++;
            i++;j++;
        }
        return l==r;
    }
};