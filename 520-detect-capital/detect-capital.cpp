class Solution {
public:
    bool detectCapitalUse(string word) {
        int capitalCnt = 0;

        for(int i = 0 ; i < word.size() ; i++){
            if(isupper(word[i])) capitalCnt++;
        }

        if(capitalCnt == word.size()) return true;
        
        if(capitalCnt == 0) return true;

        if(capitalCnt == 1 && isupper(word[0])) return true;

        return false;
    }
};