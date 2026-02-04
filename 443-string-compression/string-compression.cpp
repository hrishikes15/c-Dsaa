class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0 , i = 0;

        while(i < n){
            char curr_ch = chars[i];
            int cnt = 0;

            while(i < n && chars[i] == curr_ch){      //counting
                cnt++;i++;
            }

            chars[idx] = curr_ch; idx++;                    //assigning
            if(cnt > 1){
                string str = to_string(cnt);
                for(char &ch: str){
                    chars[idx] = ch;
                    idx++;
                }
            }
        }
        return idx;
    }
};