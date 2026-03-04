class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_map<char,int>mapp;
        int i = 0,j=0;
        int n = s.size(); if(n==0)return 0;
        int maxi = INT_MIN;

        while(j < n){
            mapp[s[j]]++;
            if(mapp.size() == j-i+1){
                maxi = max(maxi,j-i+1);
            }
            else if(mapp.size() < j-i+1){
                while(mapp.size() < j-i+1){
                    mapp[s[i]]--;
                    if(mapp[s[i]] == 0){
                        mapp.erase(s[i]);
                    }
                    i++;
                }
            }
            j++;
        }
        return maxi;
    }
};