class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        int j = s.size()-1;

        while( j >= 0 && s[j] == ' ') j--;
        
        while( j >= 0 && s[j] != ' '){
            cnt++;
            j--;
        }
        return cnt;
    }
};