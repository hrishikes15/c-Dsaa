class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans = "";
        int n = nums.size();

        for(int i = 0 ; i < n ; i++){
           char ch = nums[i][i];

           if(ch == '0'){
                ans += '1';
           }
           else{
            ans += '0';
           }
        }

        return ans;
    }
};