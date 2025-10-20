class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0 ; 
        int j = 0 ;
        int n = t.size();
        int cnt = s.size();

        while( j < n ){
            if(s[i] == t[j]){
                i++;
                j++;
                cnt--;
            }
            else{
                j++;
            }

        }
        if(cnt == 0 ){
            return true;
        }
        return false;
    }
};