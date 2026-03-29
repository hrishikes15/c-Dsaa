class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        vector<int> even(26, 0), odd(26, 0);

        for(int i = 0; i < s1.size(); i++) {
            if(i % 2 == 0) {
                even[s1[i] - 'a']++;
                even[s2[i] - 'a']--;
            } else {
                odd[s1[i] - 'a']++;
                odd[s2[i] - 'a']--;
            }
        }

        return even == vector<int>(26, 0) && odd == vector<int>(26, 0);
    }
};