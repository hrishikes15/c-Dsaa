class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;

        vector<int> ans;

        while(i >= 0 && j >= 0){
            if(nums1[i] > nums2[j]) {
                ans.push_back(nums1[i]);
                 i--;
            }
            else{
                ans.push_back(nums2[j]);
                 j--;
            }
        }
        while(i >= 0) ans.push_back(nums1[i--]);
        while(j >= 0) ans.push_back(nums2[j--]);

        reverse(ans.begin(),ans.end());

        for(int i = 0 ; i < ans.size(); i++){
            nums1[i] = ans[i];
        }
    
    }
};