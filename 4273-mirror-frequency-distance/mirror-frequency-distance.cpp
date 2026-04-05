class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int>freq1(10) , freq2(26);

        for(char &ch : s){
            if(ch <= '9' && ch >= '0'){
                freq1[ch-'0']++;
            }
            else{
                freq2[ch-'a']++;
            }
        }

        int res = 0;
        for(int i = 0 ; i < 5 ; i++){
            res += abs(freq1[i] - freq1[9-i]);
        }

        for(int i = 0 ; i < 13 ; i++){
            res += abs(freq2[i] - freq2[25-i]);
        }

        return res;
    }
};