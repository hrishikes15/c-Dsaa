class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int> mapp;
        for(int i =0 ; i < sentence.size() ; i++){
            mapp[sentence[i]]++;
        }

        for(char ch = 'a' ; ch <= 'z' ; ch++){
            if(mapp[ch] == 0) return false;
        }
        return true;
    }
};