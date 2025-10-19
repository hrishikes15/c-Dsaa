class Solution {
public:
    void solve(vector<int> ip , vector<int> op , vector<vector<int>> &vec){
        if(ip.size() == 0){
            vec.push_back(op);
            return ;
        }

        vector<int> op1 = op;
        vector<int> op2 = op;

        op2.push_back(ip[0]);
        ip.erase(ip.begin());

        solve(ip,op1,vec);
        solve(ip,op2,vec);
    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> vec;
        vector<int> op;
        sort(nums.begin(),nums.end());
        solve(nums,op,vec);

        map<vector<int> , int> mapp;
        int n = vec.size();

        for(int i = 0 ; i < n ; i++){
            mapp[vec[i]]++;
        }

        vector<vector<int>> ans;

        for(auto it = mapp.begin() ; it != mapp.end() ; it++){
            ans.push_back( it -> first);
        }        

        return ans;
    }
};