class Solution {
    typedef  pair<int,int> P;
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mapp;
        for(int x : nums){
            mapp[x]++;
        }

        priority_queue<P ,  vector<P> , greater<P>> pq;

        for(auto &it : mapp){
            int val = it.first;
            int freq = it.second;

            pq.push({freq,val});

            if(pq.size() > k){
                pq.pop();
            }
        }
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};