class Solution {
    int solve(int i , int j , vector<vector<int>>&grid , int cnt){
        int m = grid.size();
        int n = grid[0].size();

        if( i < 0 ||  j < 0 || i >= m || j >= n || grid[i][j] == -1){
            return 0;
        }
        if(grid[i][j] == 2){
            return (cnt==0);
        }

        int temp = grid[i][j];
        grid[i][j] = -1;

        int top = solve(i-1 , j , grid , cnt-1);
        int down = solve(i+1 , j , grid , cnt-1);
        int left = solve(i , j-1 , grid , cnt-1);
        int right = solve(i , j+1 , grid , cnt-1);

        grid[i][j] = temp;
        return top+down+left+right;
    }
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int stI = 0 , stJ = 0;
        int cnt = 0;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                if(grid[i][j] != -1) cnt++;
                if(grid[i][j] == 1){
                    stI = i;
                    stJ = j;
                }
            }
        }
        return solve(stI,stJ,grid , cnt-1);
    }
};