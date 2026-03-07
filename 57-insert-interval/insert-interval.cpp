class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
         int n = intervals.size();
         ans.push_back(intervals[0]);

        for(int i = 1 ; i < n ; i++){
            if(intervals[i][0] <= ans.back()[1]){
                ans.back()[0] = min(ans.back()[0] , intervals[i][0]);
                ans.back()[1] = max(ans.back()[1] , intervals[i][1]);
            }   
            else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};