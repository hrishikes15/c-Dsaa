class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        string s = "";
        while(n != 0){
           if(n % 2 == 1){
            s.push_back('1');
           }
           else{
            s.push_back('0');
           }
           n = n >>1;
        }
        reverse(s.begin(),s.end());

        string str = "";
        for(int i = 0 ; i < s.size() ;i++){
            if(s[i] == '0') str.push_back('1');
            else str.push_back('0');
        }
int sum = 0;
int j = 0;
        for(int i = str.size()-1 ; i >= 0; i--){
      sum += (str[i]-'0') * pow(2,j++);;
        }
return sum;
    }
};