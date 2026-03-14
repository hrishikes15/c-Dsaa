class Solution {
    void solve(vector<string>&res , string &curr ,int n){
        if(curr.size() == n){
            res.push_back(curr);
            return ;
        }
        for(char ch = 'a' ; ch <= 'c' ; ch++){
            if(!curr.empty() && curr.back() == ch) continue;

            curr.push_back(ch);
            solve(res,curr,n);
            curr.pop_back();

        }
    }
public:
    string getHappyString(int n, int k) {
        string curr = "";
        vector<string>res;

        solve(res , curr , n);

        if(res.size() < k) return "";
        return res[k-1];
    }
};