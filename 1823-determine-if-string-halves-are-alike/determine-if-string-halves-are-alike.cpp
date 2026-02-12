class Solution {
    bool isVowel(char &ch){
       return string("aeiouAEIOU").find(ch) != string :: npos;
    }
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        int cnt = 0;
        for(int i = 0 ; i < n/2 ; i++){
            if(isVowel(s[i])) cnt++;
            if(isVowel(s[i+n/2])) cnt--;
            
        }
        return cnt == 0;
    }
};