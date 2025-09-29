class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mapp;
        int i = 0, j = 0;
        int maxlen = 0;
        int n = s.size();
        int maxfreq = 0;

        while (j < n) {
            mapp[s[j]]++;
            maxfreq = max(maxfreq, mapp[s[j]]);

            int windowSize = j - i + 1;
            int changes = windowSize - maxfreq;

            if (changes > k) {
                mapp[s[i]]--;
                i++;
            }

            maxlen = max(maxlen, j - i + 1);
            j++;
        }

        return maxlen;
    }
};
