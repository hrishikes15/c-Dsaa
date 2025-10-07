class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> minHeap;
        unordered_map<int,int> mapp;
        vector<int> ans;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            mapp[nums[i]]++;
        }

        for( auto it =  mapp.begin() ; it != mapp.end() ; it++){

            minHeap.push({it->second,it->first});

            if ( minHeap.size() > k ){
                minHeap.pop();
            }
        }
        while(minHeap.size() != 0){
            ans.push_back( minHeap.top().second);
            minHeap.pop();
        }
        return ans;
    }
};