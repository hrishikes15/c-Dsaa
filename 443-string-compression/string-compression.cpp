class Solution {
public:
    int compress(vector<char>& chars) {
        int n  = chars.size();
        int i = 0 , idx = 0;

        while(i < n){
            char curr_char = chars[i];
            int cnt = 0;
            while(  i < n && curr_char == chars[i]){
                cnt++;i++;
            }

            chars[idx] = curr_char;
            idx++;
            if(cnt > 1){
                string str = to_string(cnt);
                for(char &ch : str){
                    chars[idx] = ch;
                    idx++;
                }
            }

        }
        return idx;
    }
};