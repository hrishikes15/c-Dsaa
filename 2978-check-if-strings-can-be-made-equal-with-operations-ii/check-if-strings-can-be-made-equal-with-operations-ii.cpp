class Solution {
public:
    bool checkStrings(string s1, string s2) {
        array<string, 2> A, B;
        for (int i = 0; i < s1.length(); i++) {
            int off = i & 1;
            A[off] += s1[i];
            B[off] += s2[i];
        }

        for (int i = 0; i < 2; i++) {
            sort(A[i].begin(), A[i].end());
            sort(B[i].begin(), B[i].end());
        }

        return A == B;
    }
};
