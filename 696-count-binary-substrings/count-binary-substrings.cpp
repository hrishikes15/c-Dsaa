class Solution {
public:
    int countBinarySubstrings(string s) {
        int prevCnt = 0;
        int currCnt = 1;
        int res = 0 ;

        for(int i = 1 ; i < s.size() ;i++){
            if(s[i] == s[i-1]){
                currCnt++;
            }
            else{
                res += min(prevCnt , currCnt);
                prevCnt = currCnt;
                currCnt = 1;
            }
        }
        return res + min(prevCnt,currCnt);
    }
};