class Solution {
    bool check(string str , char st , char end){
        for(char &ch : str){
            if(ch < st || ch > end){
                return false;
            }
        }
        return true;
    }

public:
    bool detectCapitalUse(string word) {
        if(check(word , 'A' , 'Z') || check(word , 'a','z') || check(word.substr(1) ,'a' , 'z') ){
            return true;
        }
        return false;
    }
};