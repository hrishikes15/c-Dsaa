class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;
        int n = s.size();
        vector<char>arr(s.begin(),s.end());

        for(int i = 0 ; i < n ; i++){
            if(s[i] == '('){
                st.push(i);
            }
            else if(s[i] == ')')
            {
                if(!st.empty()){
                    st.pop();
                }
                else{
                    arr[i] = '*';
                }

            }
        }

        while(!st.empty()){
            arr[st.top()] = '*';
            st.pop();
        }

        string ans = "";

        for(char &ch : arr){
            if(ch != '*'){
            ans+=ch;
            }
        }

        return ans;


    }
};