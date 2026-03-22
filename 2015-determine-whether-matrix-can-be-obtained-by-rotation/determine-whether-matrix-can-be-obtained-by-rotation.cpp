class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int m = mat.size();
        if(target.size()!=m) return false;
        int n = mat[0].size();

        if(mat==target)return true;

        int t = 4;
        while(t--){
            for(int i = 0 ; i < m ; i++){
                for(int j = i ; j < n; j++){
                    swap(mat[i][j] , mat[j][i]);
                }
            }
            
            for(int i = 0 ; i < m ; i++){
                reverse(mat[i].begin(),mat[i].end());
            }
            if(mat == target) return true;
        }
        return false;
    }
};