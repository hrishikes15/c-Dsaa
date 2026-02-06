class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        int minIcre = 0;

        for(int val : nums){
            maxi = max(maxi,val);
        }

        vector<int> freq(n+maxi,0);

        for(int val : nums){
            freq[val]++;
        }

        for(int i = 0 ; i < freq.size(); i++){
            if(freq[i] <= 1) continue;

            int dup = freq[i]-1;
            freq[i+1] += dup;
            freq[i] = 1;

            minIcre += dup;
        }
        return minIcre;
    }
};