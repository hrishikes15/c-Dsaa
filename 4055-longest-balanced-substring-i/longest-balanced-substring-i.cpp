class Solution {
    bool check(vector<int>& freq){
        int com = 0;
        for(int i = 0 ; i < 26; i++){
            if(freq[i] == 0) continue;

            if(com == 0){
                com = freq[i];
            }
            else if(com != freq[i]){
                return false;
            }
        }
        return true;
    }
public:
    int longestBalanced(string s) {
        int n = s.size();
        int maxL = 0;

        for(int i = 0 ; i < n ; i++){
            vector<int> freq(26,0);

            for(int j = i ; j < n ; j++){
                freq[s[j] - 'a']++;

                if(check(freq)){
                    maxL = max(maxL , j-i+1);
                }
            }
        }
        return maxL;
    }
};