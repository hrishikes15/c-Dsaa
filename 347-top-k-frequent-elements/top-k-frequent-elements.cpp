class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mapp;
        for(int x : nums){
            mapp[x]++;
        }
        vector<pair<int,int>> vec(mapp.begin(),mapp.end());

        auto hrishi = [&](pair<int,int>& a , pair<int,int>&b){
            return a.second > b.second;
        };

        sort(vec.begin(),vec.end(),hrishi);

        vector<int>ans;
        for(int i = 0 ; i < k ; i++){
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};