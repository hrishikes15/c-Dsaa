class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> mapp;
        int i = 0 , j = 0 ;
        int n = s.size();
        int count = 0 ;

        while( j < n ){
            mapp[s[j]]++;

            if( mapp.size() == 3){
                while(mapp.size() == 3){
                    count += (n - j );

                    mapp[s[i]]--;
                    if(mapp[s[i]] == 0) {
                        mapp.erase(s[i]);
                    }
                    i++;
                }
            }
           j++;
        }
        return count;
    }
};

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();