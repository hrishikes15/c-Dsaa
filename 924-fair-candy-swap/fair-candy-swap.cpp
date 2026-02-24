class Solution {
public:
    vector<int> fairCandySwap(vector<int>& a, vector<int>& b) {
        int s1 = accumulate(begin(a),end(a),0);
        int s2 = accumulate(begin(b),end(b),0);

        int diff = (s1-s2)/2;
        sort(begin(a),end(a));
        sort(begin(b),end(b));

        int i = 0 , j = 0;

        while(i < a.size() && j < b.size()){
            int curr = a[i] - b[j];

            if(curr == diff) return{a[i],b[j]};

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