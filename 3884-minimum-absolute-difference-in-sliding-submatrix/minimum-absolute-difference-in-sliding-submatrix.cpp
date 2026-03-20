class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
      int m = grid.size();
      int n = grid[0].size();

      vector<vector<int>>res (m-k+1 , vector<int>(n-k+1));

      for(int i = 0 ; i <= m-k ; i++){
        for(int j = 0 ; j <= n-k ; j++){
            
            set<int>st;

            for(int r = i ; r < i+k ; r++){
                for(int c = j ; c < j+k ; c++){
                    st.insert(grid[r][c]);
                }
            }

            if(st.size() == 1){
                continue;
                res[i][j] = 0;
            }

            int mini = INT_MAX;
            auto prev = st.begin();
            auto curr = next(prev);

            while(curr != st.end()){
                mini = min(mini , abs(*prev - *curr));
                prev = curr;
                curr = next(curr);
            }
            res[i][j] = mini;
        }
      }
      return res;
    }
};