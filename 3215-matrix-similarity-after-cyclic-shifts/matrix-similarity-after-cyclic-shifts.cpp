class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
         k = k % n;
        vector<vector<int>> arr = mat;
        for(int i = 0 ; i < m ; i++){
            if(i % 2 == 0){
                rotate(arr[i].begin() , arr[i].begin()+k , arr[i].end());
            }
            else{
                rotate(arr[i].rbegin() , arr[i].rbegin()+k , arr[i].rend());
            }

        }
        return arr == mat;
    }
};