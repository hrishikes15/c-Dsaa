class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int maxi = 0;
        int n = s.size();
        int depth = 0;

        for(int i = 0 ; i < n ; i++){
            if(s[i] == '('){
                depth++;
                st.push('(');
            }
            else if(s[i] == ')'){
                maxi = max(maxi , depth);
                st.pop();
                depth--;
            }
        }
        return maxi;
    }
};