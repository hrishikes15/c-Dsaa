class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mapp;
        
        for(char c : t){
            mapp[c]++;
        }
        for(char c : s){
            mapp[c]--;

            if(mapp[c] == 0){
                mapp.erase(c);
            }
        }

        return mapp.begin() -> first;
        
    }
};