class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> mapp;

        int n = strs.size();

        for(int i = 0 ; i < n ; i++){
            string key = strs[i];
            sort(key.begin(),key.end());
            mapp[key].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto &it : mapp){
            res.push_back(it.second);
        }
        return res;
    }
};