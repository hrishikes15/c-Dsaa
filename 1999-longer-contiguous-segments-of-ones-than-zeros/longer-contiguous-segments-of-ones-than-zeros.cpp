class Solution {
public:
    bool checkZeroOnes(string s) {
        int cnt1 = 0;
        int cnt0 = 0;
        int max1 = 0;
        int max0 = 0;

        for(int i =0 ; i < s.length() ; i++){
            if(s[i] == '1'){
                cnt1++;
                max0 = max(max0,cnt0);
                cnt0 = 0;
            }
            else{
                cnt0++;
                max1 = max(max1,cnt1);
                cnt1 = 0;
            }
        }
        max1 = max(max1 , cnt1);
        max0 = max(max0 , cnt0);
        return max1>max0;
    }
};