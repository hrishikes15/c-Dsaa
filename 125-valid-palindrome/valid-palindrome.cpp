class Solution {
    bool valid(char &ch){
       char  c = tolower(ch);
        if(c >= 'a' && c <= 'z') return true;
        if(c >= '0' && c <= '9')  return true;
        return false;
    }
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0 , j = n-1;
        while(i <= j){
            if(!valid(s[i])){
                i++;
                continue;
            }
            if(!valid(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i]) != tolower(s[j])) return false;

            i++;j--;
        }
        return true;
    }
};