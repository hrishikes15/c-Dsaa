class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>>   mapp;

        for(int i = 0 ; i < strs.size() ; i++){
            string key = strs[i];
            sort(key.begin() , key.end());
            mapp[key].push_back(strs[i]);
        }

        vector<vector<string>> result;
        for(auto it = mapp.begin() ; it != mapp.end() ; it++){
            result.push_back(it -> second);
        }

        return result;
    }
};