class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mapp;
        for(char &ch : s){
            mapp[ch]++;
        }
        auto hrishi = [&](pair<char,int>&a , pair<char,int>&b){
            return a.second > b.second;
        };
        vector<pair<char,int>> vec(mapp.begin(),mapp.end());
        sort(vec.begin(),vec.end() , hrishi);

        string ans = "";
        for(int i = 0 ; i < vec.size() ; i++){
            ans.append(vec[i].second , vec[i].first);
        }
        return ans;
    }
};