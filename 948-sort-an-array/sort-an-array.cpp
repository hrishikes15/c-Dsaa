class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> ans;
        priority_queue<int , vector<int> , greater <int> > minHeap;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            minHeap.push(nums[i]);
        }
        while(minHeap.size() != 0){
            ans.push_back(minHeap.top());
            minHeap.pop();
        }
        return ans;
    }
};