class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

       sort(s.begin(),s.end());
       sort(t.begin(),t.end()); 

       int n = s.size();
       int m = t.size();

       int i = 0 ; 
       int j = 0 ;

       while(i < n && j < m){
        if(s[i] == t[j]){
            i++;
            j++;
            
        }
        else{
            return false;
        }
       }
       return true;
    }
};