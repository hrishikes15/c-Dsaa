class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt = 0;
        int n = nums.size();
        char d = digit + '0';

        for(int i = 0 ; i < n ; i++){

            string str = to_string(nums[i]);


            for(int j = 0 ; j < str.size() ; j++){
                if(str[j] == d) cnt++;
            }
        }
        return cnt;
    }
};