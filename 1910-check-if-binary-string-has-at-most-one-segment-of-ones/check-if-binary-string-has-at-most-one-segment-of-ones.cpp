class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s[0] == '0') return false;
        bool yes = true;
        for(int i = 0 ; i < s.size()-1 ; i++){
            if(s[i] == '0' && s[i+1] == '1'){
                yes = false;
            }
        }
        return yes;
    }
};