class Solution {
    bool check(string s){
        int n  = s.size();
        int i = 0;
        int j = n-1;

        while(i < j){
            if(s[i] != s[j]){
                return false;
            }
            i++;j--;
        }
        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {
        for(string &word : words){
            if(check(word)){
                return word;
            }
        }
        return "";
    }
};