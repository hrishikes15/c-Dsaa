class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans;
        ans.reserve(s.size() + spaces.size());
        int n = s.size();
        int j = 0 ;

        for(int i = 0 ; i < n ; i++){
            if( j < spaces.size()  && i == spaces[j]){
                ans.push_back(' ');
                j++;
            }   
            ans.push_back(s[i]);
        }
        return ans;
    }
};