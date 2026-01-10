class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(),nums.end());

        int mid = (n-1)/2;

        vector<int>left (nums.begin(),nums.begin()+mid+1);
        vector<int>right(nums.begin()+mid+1 , nums.end());

        reverse(left.begin(),left.end());
        reverse(right.begin(),right.end());

        int i = 0  , l = 0 ,r = 0;

        while(i < n){
            if(l < left.size()){
                nums[i] = left[l];
                i++;l++;
            }
            if(r < right.size()){
                nums[i] = right[r];
                i++;r++;
            }
        }
    }
};