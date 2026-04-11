class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>mapp;
        int n = nums.size();
        if(n < 3) return -1;

        for(int i = 0 ; i < n ; i++){
            mapp[nums[i]].push_back(i);
        }

        int mini = INT_MAX;

        for(auto &it : mapp){
           vector<int>v = it.second;

           int n = v.size();
           if(n >= 3){

            for(int i = 0 ; i+2 < n ; i++){
                int sum = abs(v[i]-v[i+1]) + abs(v[i+1]-v[i+2]) + abs(v[i+2]-v[i]);
                mini = min(mini,sum);
            }
           }
        }
        return mini == INT_MAX ? -1 : mini;
    }
};