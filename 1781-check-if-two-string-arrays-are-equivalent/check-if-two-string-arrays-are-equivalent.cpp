class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1;
        string s2;
        for(int i = 0 ; i < word1.size() ; i++) s1+=word1[i];
        for(int i = 0 ; i < word2.size() ; i++) s2+=word2[i];

        int n = s1.size() ;int m = s2.size();
        if(n != m) return false;

        int i = 0 , j = 0;
        while(i < n && j < m){
            if(s1[i] != s2[j]) return false;
            i++;j++;
        }
        return true;
    }
};