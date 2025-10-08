class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> minHeap;
        
        for (int i = 0; i < n1 && i < k; i++) {
            minHeap.push({nums1[i] + nums2[0], {i, 0}});
        }
        
        while (!minHeap.empty() && ans.size() < k) {
            auto top = minHeap.top();
            minHeap.pop();
            
            int i = top.second.first;
            int j = top.second.second;
            
            ans.push_back({nums1[i], nums2[j]});
            
            if (j + 1 < n2) {
                minHeap.push({nums1[i] + nums2[j + 1], {i, j + 1}});
            }
        }
        
        return ans;
    }
};
