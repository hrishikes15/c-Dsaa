// in. row ge just check who (which element) is going to come next i.e after shifting elements which element is going to come
// if the element that is going to come is not equall to current element then return false

class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
         k = k % n;
        vector<vector<int>> arr = mat;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                int curr = j;
                int future;
                if(i % 2 == 0){
                    future = (j+k)%n;
                }
                else{
                    future = (j-k +n)%n;
                }

                if(mat[i][curr] != mat[i][future]){
                    return false;
                }
            }
        }
        return true;
    }
};