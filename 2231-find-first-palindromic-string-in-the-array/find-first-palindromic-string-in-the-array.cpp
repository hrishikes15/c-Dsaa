class Solution {
    bool check(string s){
        string temp (s.rbegin(),s.rend());
        return s==temp;
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