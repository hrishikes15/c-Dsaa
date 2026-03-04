class Solution {
    bool solve(string &s){
        vector<int>freq(26,0);
        for(char &x : s){
            freq[x-'a']++;

            if(freq[x-'a'] > 1){
                return true;
            }
        }
        return false;
    }
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size())
            return false;
        if(s == goal){
            return solve(s);
        }
        vector<int> idx;

        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] != goal[i]){
                idx.push_back(i);
            }
        }
        if(idx.size()!=2) return false;
      swap(s[idx[0]] , s[idx[1]]);
        return s==goal;
    }
};