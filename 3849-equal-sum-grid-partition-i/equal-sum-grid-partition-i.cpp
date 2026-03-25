class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long long totSum = 0;
        int n = grid.size();
        int m = grid[0].size();

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                totSum += grid[i][j];
            }
        }

        long long currSum1  = 0;
        for(int i = 0 ; i < n; i++){
            for(int j = 0 ; j < m ; j++){
                currSum1 += grid[i][j];
            }
            long long remaningSum = totSum - currSum1;
            if(remaningSum == currSum1) return true;
        }

        long long currSum2 = 0;
        for(int j = 0 ; j < m ; j++){
            for(int i = 0 ; i < n ; i++){
                currSum2 += grid[i][j];
            }
            long long remSum = totSum-currSum2;
            if(remSum == currSum2) return true;
        }
        
        return false;
    }
};