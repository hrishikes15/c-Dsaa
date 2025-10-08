class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if (n % groupSize != 0) return false;

        map<int, int> count;
        for (int i = 0; i < n; i++) {
            count[hand[i]]++;
        }

        for (auto it = count.begin(); it != count.end(); it++) {
            int card = it->first;
            int freq = it->second;

            if (freq > 0) {
                for (int i = 1; i < groupSize; i++) {
                    int nextCard = card + i;

                    if (count[nextCard] < freq) {
                        return false;
                    }

                 
                    count[nextCard] -= freq;
                }
            }
        }

        return true;
    }
};
