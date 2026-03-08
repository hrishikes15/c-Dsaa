class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int minCap = INT_MAX;
        int ans = -1;

        for(int i = 0; i < capacity.size(); i++){
            if(capacity[i] >= itemSize && capacity[i] < minCap){
                minCap = capacity[i];
                ans = i;
            }
        }

        return ans;
    }
};