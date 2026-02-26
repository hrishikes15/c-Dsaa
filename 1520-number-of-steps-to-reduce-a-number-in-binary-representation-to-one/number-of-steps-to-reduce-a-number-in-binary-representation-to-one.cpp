class Solution {
public:
    int numSteps(string s) {
        int cnt = 0;
        int carry = 0;

        for(int i = s.size() -1 ; i > 0 ; i--){
            int bit = (s[i] - '0') + carry;

            if(bit == 1){
                cnt += 2;
                carry = 1;
            }
            else{
                cnt +=1;
            }
        }
        return cnt + carry;
    }
};