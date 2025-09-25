class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> q;
        int i=0, j=0;
        vector<int> ans;

        while(j < nums.size()) {
            while(q.size() > 0 && q.back() < nums[j]) {
                q.pop_back();
            }
            q.push_back(nums[j]);

            if(j-i+1 < k) {
                j++;
            }
            else{
                ans.push_back(*q.begin());

                // removing trailing element from q;
                if(*q.begin() == nums[i]) {
                    q.erase(q.begin());
                }
                i++;
                j++;
            }
        }

        return ans;
    }
};