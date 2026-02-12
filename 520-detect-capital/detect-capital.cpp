class Solution {
    bool allCapital(string str){
        for(char &ch : str){
            if(ch <'A' || ch > 'Z'){
                return false;
            }
        }
        return true;
    }
    bool allSmall(string str){
        for(char &ch : str){
            if(ch <'a' || ch > 'z'){
                return false;
            }
        }
        return true;
    }
public:
    bool detectCapitalUse(string word) {
        if(allCapital(word) || allSmall(word) || allSmall(word.substr(1))){
            return true;
        }
        return false;
    }
};