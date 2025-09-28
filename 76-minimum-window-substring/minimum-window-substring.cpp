class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char , int> mapp;
        for(int i = 0 ; i < t.size() ;i++){
            mapp[t[i]]++;
        }
        int count = mapp.size();
        int i = 0 , j = 0 ;
        int n = s.size();
        int minlen = INT_MAX ;
        int start = 0 ;
        while(j < n){
            if(mapp.find(s[j]) != mapp.end()){
                mapp[s[j]]--;
                if(mapp[s[j]] == 0){
                    count--;
                }
            }
            if(count == 0 ){
                while(count == 0){
                    if(mapp.find(s[i]) != mapp.end()){
                        mapp[s[i]]++;
                        if(mapp[s[i]]== 1){
                            count++;
                            if((j-i+1) < minlen){
                                minlen = (j-i+1);
                                start = i;
                            }
                        }
                    }
                    i++;
                }
            }
            j++;
        }
        if(minlen == INT_MAX) return "";
        return s.substr(start,minlen) ;
        
    }
};