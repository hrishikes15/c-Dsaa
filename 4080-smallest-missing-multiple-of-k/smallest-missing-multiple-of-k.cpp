class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        int val = 0 ;
        unordered_map<int,int> mapp;

        for(int i = 0 ; i < n ; i++){
            mapp[nums[i]]++;
        }
        int multiple = k;
        while(true){
            if(mapp.find(multiple) == mapp.end()){
                return multiple;
            }
            multiple += k;
        }
           
    }
};