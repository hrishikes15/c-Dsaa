class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int n = capacity.size();
        
        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++){
            v.push_back({capacity[i], i});
        }

        sort(v.begin(), v.end());

        auto it = lower_bound(v.begin(), v.end(), make_pair(itemSize, -1));

        if(it == v.end()) return -1;

        int minCap = it->first;
        int ans = it->second;
        while(it != v.end() && it->first == minCap){
            ans = min(ans, it->second);
            it++;
        }

        return ans;
    }
};