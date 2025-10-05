class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return  func ( nums , k ) - func( nums , k-1);
    }

    int func(vector<int>& nums, int goal) {
        if (goal < 0) return 0;

        int count = 0;
        int i = 0, j = 0;
        int n = nums.size();
        int sum = 0;

        while (j < n) {
            sum += nums[j] % 2;


            while (i <= j && sum > goal) {
                sum -= nums[i] % 2;
                i++;
            }

           
            count += (j - i + 1);

            j++;
        }
 
        return count;
    }
};
