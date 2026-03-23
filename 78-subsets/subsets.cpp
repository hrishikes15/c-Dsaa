class Solution {
    void solve(vector<int>ip , vector<vector<int>>&ans , vector<int>op){
        if(ip.size() == 0){
            ans.push_back(op);
            return;
        }
        vector<int>op1 = op;
        vector<int>op2 = op;
        
        op2.push_back(ip[0]);
        ip.erase(ip.begin());

        solve(ip,ans,op1);
        solve(ip,ans,op2);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>op;
        solve(nums,ans,op);
        return ans;
    }
};