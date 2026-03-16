class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int m = mat.size();
        int n = mat[0].size();
        int start = 0;
        int end = n*m-1;
        while(start <= end){
            int mid = start + (end-start)/2;

            int row = mid/n;
            int col = mid%n;

            if(mat[row][col] < tar){
                start = mid+1;
            }
            else if(mat[row][col] > tar){
                end = mid-1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};