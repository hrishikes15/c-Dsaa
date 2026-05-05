class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int maxi = 0;
        int n = s.size();

        for(int i = 0 ; i < n ; i++){
            if(s[i] == '('){
                st.push('(');
            }
            else if(s[i] == ')'){
                int k = st.size();
                maxi = max(maxi , k);
                st.pop();
            }
        }
        return maxi;
    }
};