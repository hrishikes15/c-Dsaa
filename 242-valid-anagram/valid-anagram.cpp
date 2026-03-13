class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mapp;
        for(char &x : s) mapp[x]++;
        for(char &x : t) mapp[x]--;

        for(auto &it : mapp){
            if(it.second != 0) return false;

        }
        return true;
    }
};