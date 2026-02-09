class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row = 0;

         auto lambda = [&](int sum , vector<int> vec){
            int n = vec.size();
            sum += vec[row];
            if(row != n-row-1){
                sum += vec[n-row-1];
            }
            row++;
            return sum;
        };

        int res = accumulate(begin(mat) , end(mat) , 0 , lambda);

        return res;
    }
};