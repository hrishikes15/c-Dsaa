class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mapp;
        for(int x : nums){
            mapp[x]++;
        }

        for(auto &it : mapp){
            if(it.second > 1){
                return it.first;
            }
        }
        return -1;
    }
};