class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int n = words.size();

        auto lambda = [&x](char ch){
            return (ch == x);
        };

        for(int i = 0 ; i < n ; i++){
            if(any_of(words[i].begin(),words[i].end(),lambda) == true){
                ans.push_back(i);
            }
        }
        return ans;
    }
};