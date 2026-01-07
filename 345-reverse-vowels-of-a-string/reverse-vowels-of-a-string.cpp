class Solution {
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U'){
            return true ;
        }
        return false;
    }
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size()-1;

        while(i < j){
            if(!isVowel(s[i])) i++;
            else if (!isVowel(s[j])) j--;
            else{ 
                swap(s[i] , s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};