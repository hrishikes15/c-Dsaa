class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size() > 2){
            string t = "";

            for(int i = 0 ; i+1 < s.size() ; i++){
                int a = (s[i] - '0' + s[i+1] - '0') % 10;
                t.push_back(a);
            }
            s = t;

        }

        return s[0] == s[1];
    }
};