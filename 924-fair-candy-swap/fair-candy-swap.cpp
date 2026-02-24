class Solution {
public:
    vector<int> fairCandySwap(vector<int>& a, vector<int>& b) {
        int sum1 = reduce(begin(a),end(a));
        int sum2 = reduce(begin(b),end(b));

        int diff = (sum1 - sum2) / 2;

        sort(begin(a),end(a));
        sort(begin(b),end(b));

        int i = 0 , j = 0;
        while(i < size(a) && j < size(b)){
            int curr = a[i] - b[j];

            if(curr == diff) return {a[i],b[j]};

            if(curr < diff){
                i++;
            }
            else{
                j++;
            }
        }
        return {-1,-1};
    }
};