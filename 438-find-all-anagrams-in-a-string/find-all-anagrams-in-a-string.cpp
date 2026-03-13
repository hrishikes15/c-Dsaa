class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int k = p.size();
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(char &x:p) freq1[x - 'a']++;

        int left = 0;

        vector<int>ans;

        for(int right = 0 ; right < n ; right++){
            freq2[s[right] - 'a']++;

            int size = right-left+1;

            if(size == k){
                if(freq1 == freq2){
                    ans.push_back(left);
                }
            }

            if(size >= k){
                freq2[s[left] - 'a']--;
                left++;
            }
        }
        return ans;
    }
};