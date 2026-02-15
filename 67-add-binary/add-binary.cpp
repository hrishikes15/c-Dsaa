class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size()-1;
        int m = b.size()-1;

        string res = "";

        int sum = 0;
        int carry = 0;

        while(m >= 0 || n >= 0){
            sum = carry;

            if(n >= 0){
                sum += a[n] - '0';
                n--;
            }
            if(m >= 0){
                sum += b[m] - '0';
                m--;
            }
            
            res.push_back(((sum % 2) == 0) ? '0':'1');
            carry = sum/2;
        }
        if(carry){
            res.push_back('1');
        }
        reverse(begin(res),end(res));
        return res;
    }
};