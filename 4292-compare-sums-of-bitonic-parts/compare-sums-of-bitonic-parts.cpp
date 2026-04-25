class Solution {
    int left(vector<int>nums,int n){
        for(int i = 0 ; i < n-1 ; i++){
            if(nums[i+1] < nums[i]){
                return i;
            }
        }
        return -1;
    }
public:
    int compareBitonicSums(vector<int>& nums) {
        int n = nums.size();
        int peakEle = left(nums,n);

        long long sL = 0 , sR = 0;
        for(int i = 0 ; i <= peakEle ; i++){
            sL += nums[i];
        }

        for(int i = peakEle ; i < n ; i++){
            sR += nums[i];
        }

        if(sL > sR) return 0;
        else if(sL < sR) return 1;
        return -1;
    }
};