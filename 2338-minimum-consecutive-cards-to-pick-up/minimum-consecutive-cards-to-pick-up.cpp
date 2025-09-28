class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int i = 0  ;
        unordered_map<int,int> mapp;
        int minLen = INT_MAX;
        int n = cards.size();
        for(int j = 0 ; j < n ; j++ ){
            int card = cards[j];
            mapp[card]++;

            while(mapp[card] > 1){
                minLen = min(minLen , j - i + 1);
                mapp[cards[i]]--;
                i++;
            }
        }
        return (minLen == INT_MAX) ? -1 : minLen;
    }
};