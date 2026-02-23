class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> mapp;
        int n = s.size();
        if(n < k) return false;

        int number = 1 << k;
        int  j = 0;
        string str = "";

        while(j < n){
            str.push_back(s[j]);

            if(str.size() == k){
                mapp.insert(str);
            }
            else if(str.size() > k){
                str.erase(str.begin());
                mapp.insert(str);
            }
            if(mapp.size() == number) return true;
             j++;
          }
          return false;
    }
};