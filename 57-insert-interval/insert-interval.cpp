class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& arr, vector<int>& newInt) {
        vector<vector<int>> ans;
        int n = arr.size();
        int i = 0 ;

        //leftside

        while( i < n && arr[i][1] < newInt[0]){
            ans.push_back(arr[i]);
            i++;
        }

        //overlapping

        while( i < n && arr[i][0] <= newInt[1]){
            newInt[0] = min(newInt[0] , arr[i][0]);
            newInt[1] = max(newInt[1] , arr[i][1]);
            i++;
        }
        ans.push_back(newInt);

        //right side

        while(i < n ){
            ans.push_back(arr[i]);
            i++;
        }
        return ans;
    }
};