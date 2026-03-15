class Solution {
    bool isVowel(char &ch){
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
public:
    int maxVowels(string s, int k) {
        int maxi = 0;
        int i=0,j=0;
        int n = s.size();
        int cnt = 0;

        while(j < n){
            if(isVowel(s[j])){
                cnt++;
            }
            if(j-i+1 == k){
                maxi = max(maxi,cnt);

                if(isVowel(s[i])){
                    cnt--;
                }
                i++;
            }
            
            j++;
        }
        return maxi;
    }
};