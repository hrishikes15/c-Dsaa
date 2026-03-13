class Solution {
    bool check(string &str){
        string str1 = str;
        reverse(str1.begin(),str1.end());

        return str == str1;
    }
public:
    int countSubstrings(string s) {
        int n = s.size();
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            string str = "";
            for(int j = i ; j < n ; j++){
                str += s[j];
                if(check(str)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};