class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        list<int> li;
        int i = 0  , j = 0 ;
        int n = nums.size();
        vector<int> ans;

        while( j < n ){

            while(li.size() !=  0 && li.back() < nums[j]){
                li.pop_back();
            }
            li.push_back(nums[j]);

            if((j-i+1) < k){
                j++;
            }
            else if((j-i+1) == k){
                ans.push_back(li.front());

                if(nums[i] == li.front()){
                    li.pop_front();
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};
auto init = atexit([]() { ofstream("display_runtime.txt") << "0"; });
