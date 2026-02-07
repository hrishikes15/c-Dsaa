class Solution {
public:
    int minimumDeletions(string s) {
        stack<char> st;
        int n = s.size();
        int i = n-1;
        int cnt = 0;
        while(i >= 0){
            if(s[i] == 'b' && !st.empty() &&st.top() == 'a'){
                cnt++;
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            i--;
        }
        return cnt;
    }
};