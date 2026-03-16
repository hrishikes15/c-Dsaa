class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int m = mat.size();
        int n = mat[0].size();
        int i = 0;
        int j = n-1;

        while(i < m && j >= 0){
            if(mat[i][j] > tar){
                j--;
            }
            else if(mat[i][j] < tar){
                i++;
            }
            else{
                return true;
            }
        }
        return false;
    }
};